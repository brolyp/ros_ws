import rclpy
from geometry_msgs.msg import PoseStamped
from rclpy.node import Node
from sensor_msgs.msg import JointState
from .kinematicsService import ForwardKinematicService
from nav_msgs.msg import Path

class Real2Sim_Kinematics_Publisher(Node):
    def __init__(self):
        super().__init__("Real2Sim_Kinematics_Publisher")

        self.declare_parameter("frame_id", "base_link")
        self.declare_parameter("tool_frame_id", "alpha_standard_jaws_base_link")
        self.frame_id = self.get_parameter("frame_id").value
        self.tool_frame_id = self.get_parameter("tool_frame_id").value

        self.Fk_Service = ForwardKinematicService(self)

        self.create_subscription(JointState, "joint_states", self.joint_state_handler, 10)
        self.pose_publisher = self.create_publisher(PoseStamped, "model_end_effector_pose", 10)
        self.path_pub = self.create_publisher(Path, 'Path', 1)
        self.path = Path()
        self.path.header.frame_id = self.frame_id

    def joint_state_handler(self, state:JointState):
        #self.get_logger().info(f"joint state in real2sim fk {state.position}")
        self.convert_km_end_pos_to_pose(state.position)

    def convert_km_end_pos_to_pose(self, position):
        output_pose = PoseStamped()
        output_pose = self.Fk_Service.compute_fk_callback(self,position)
        #self.get_logger().info(f"Fk response recieved: {output_pose}")
        self.publish_pose(output_pose)
        self.draw_path(output_pose)

    def draw_path(self, current_pose: PoseStamped):
        pose = PoseStamped()
        pose.pose = current_pose.pose
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.header.frame_id = self.frame_id
        self.path.poses.append(pose)
        self.path.header.stamp = self.get_clock().now().to_msg()
        self.path_pub.publish(self.path)
    
    def publish_pose(self, pose):
        self.pose_publisher.publish(pose)

def main(args = None):
    rclpy.init(args=args)
    fkrepr = Real2Sim_Kinematics_Publisher()
    try:
        rclpy.spin(fkrepr)
    except KeyboardInterrupt:
        fkrepr.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()