// Generated by gencpp from file open_manipulator_msgs/SetJointPositionRequest.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_SETJOINTPOSITIONREQUEST_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_SETJOINTPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <open_manipulator_msgs/JointPosition.h>

namespace open_manipulator_msgs
{
template <class ContainerAllocator>
struct SetJointPositionRequest_
{
  typedef SetJointPositionRequest_<ContainerAllocator> Type;

  SetJointPositionRequest_()
    : joint_position()  {
    }
  SetJointPositionRequest_(const ContainerAllocator& _alloc)
    : joint_position(_alloc)  {
  (void)_alloc;
    }



   typedef  ::open_manipulator_msgs::JointPosition_<ContainerAllocator>  _joint_position_type;
  _joint_position_type joint_position;





  typedef boost::shared_ptr< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJointPositionRequest_

typedef ::open_manipulator_msgs::SetJointPositionRequest_<std::allocator<void> > SetJointPositionRequest;

typedef boost::shared_ptr< ::open_manipulator_msgs::SetJointPositionRequest > SetJointPositionRequestPtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::SetJointPositionRequest const> SetJointPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace open_manipulator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'open_manipulator_msgs': ['/home/parallels/catkin_ws/src/open_manipulator/open_manipulator_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e1f1ee99b5e77308297dc4eeedd305d4";
  }

  static const char* value(const ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe1f1ee99b5e77308ULL;
  static const uint64_t static_value2 = 0x297dc4eeedd305d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/SetJointPositionRequest";
  }

  static const char* value(const ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "JointPosition joint_position\n\
\n\
================================================================================\n\
MSG: open_manipulator_msgs/JointPosition\n\
string[]   joint_name\n\
float64[]  position\n\
float64    max_accelerations_scaling_factor\n\
float64    max_velocity_scaling_factor\n\
";
  }

  static const char* value(const ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJointPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_manipulator_msgs::SetJointPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_position: ";
    s << std::endl;
    Printer< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >::stream(s, indent + "  ", v.joint_position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_SETJOINTPOSITIONREQUEST_H
