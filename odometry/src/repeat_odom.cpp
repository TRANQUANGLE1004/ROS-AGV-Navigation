//============================================================================
// Name        : .cpp
// Author      : "Tran Quang Le"
// Version     :
// Copyright   : ©opyRights
// Description : this program listen odometry message and repeat it
//============================================================================
#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <nav_msgs/Odometry.h>

void repeatOdom(const nav_msgs::OdometryConstPtr& msg);


nav_msgs::Odometry odom_repeat;
ros::Publisher odom_pub;

int main(int argc,char** argv){

    ros::init(argc,argv,"odometry_reapeat");
    // create variable

    ros::NodeHandle node_sub;   // node for publish msg
    ros::NodeHandle node_pub;   // node for subscriber ms
    odom_pub = node_pub.advertise<nav_msgs::Odometry>("my_odom",50);

    ros::Rate r(1.0);

    ros::Subscriber odom_sub = node_sub.subscribe("odom",1000,&repeatOdom);
    // ros::Rate r(10.0);
    // while(ros::ok()){
    //     ros::Subscriber odom_sub = node_sub.subscribe("odom",1000,&repeatOdom);
    //     odom_pub.publish(odom_repeat);
    //     r.sleep();
    // }
    r.sleep();
    ros::spin();
    return 0;
}

void repeatOdom(const nav_msgs::OdometryConstPtr& msg){
    ROS_INFO("Receive data \n");
    
    //assign variable
    odom_repeat.child_frame_id = msg->child_frame_id;
    odom_repeat.header = msg->header;
    odom_repeat.pose = msg->pose;
    odom_repeat.twist = msg->twist;
    //
    odom_pub.publish(odom_repeat);
}