# ROS AGV Navigation

[![Workspace-2_001.png](https://s8.gifyu.com/images/Workspace-2_001.png)](https://gifyu.com/image/C8TD)

this project make navigation stack in ros noetic (ubuntu 20.04):
+ The actuator: use [turtle_bot_3](https://emanual.robotis.com/docs/en/platform/turtlebot3/simulation/) simulation for run move_base and lidar message (sensor_msgs/LaserScan).

+ Use [rviz_navigation_setup](http://wiki.ros.org/navigation/Tutorials/Using%20rviz%20with%20the%20Navigation%20Stack) for monitor information.

---

## Content
- [Content](##Content)
  <!-- * [Sub-heading](#sub-heading)
    + [Sub-sub-heading](#sub-sub-heading) -->
- [Getting start](##Getting-Start)

- [Reference](##Reference)

---
## Getting Start

First, you must read tutorial in [navigation_wiki](http://wiki.ros.org/navigation/Tutorials/RobotSetup).

You must run turtle bot 3 gazebo before run your navigation launch because your module get data from gazebo app.

### Folder tree

| Folder | Description |
| ------ | ----------- |
| tf     | store transform configuration node and example|
| sensor infor | store sensor information for many purpose. About source code and example|
| ...    | .....|

---
## Transform Configuration

+ todo

---
## Reference