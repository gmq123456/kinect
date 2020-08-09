// Generated by gencpp from file realsense_camera/ForcePowerResponse.msg
// DO NOT EDIT!


#ifndef REALSENSE_CAMERA_MESSAGE_FORCEPOWERRESPONSE_H
#define REALSENSE_CAMERA_MESSAGE_FORCEPOWERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace realsense_camera
{
template <class ContainerAllocator>
struct ForcePowerResponse_
{
  typedef ForcePowerResponse_<ContainerAllocator> Type;

  ForcePowerResponse_()
    {
    }
  ForcePowerResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ForcePowerResponse_

typedef ::realsense_camera::ForcePowerResponse_<std::allocator<void> > ForcePowerResponse;

typedef boost::shared_ptr< ::realsense_camera::ForcePowerResponse > ForcePowerResponsePtr;
typedef boost::shared_ptr< ::realsense_camera::ForcePowerResponse const> ForcePowerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::realsense_camera::ForcePowerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace realsense_camera

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'realsense_camera': ['/home/gmq/catkin_ws/src/realsense_camera/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::realsense_camera::ForcePowerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "realsense_camera/ForcePowerResponse";
  }

  static const char* value(const ::realsense_camera::ForcePowerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::realsense_camera::ForcePowerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ForcePowerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::realsense_camera::ForcePowerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::realsense_camera::ForcePowerResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // REALSENSE_CAMERA_MESSAGE_FORCEPOWERRESPONSE_H
