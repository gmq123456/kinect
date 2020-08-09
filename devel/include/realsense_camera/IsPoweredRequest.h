// Generated by gencpp from file realsense_camera/IsPoweredRequest.msg
// DO NOT EDIT!


#ifndef REALSENSE_CAMERA_MESSAGE_ISPOWEREDREQUEST_H
#define REALSENSE_CAMERA_MESSAGE_ISPOWEREDREQUEST_H


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
struct IsPoweredRequest_
{
  typedef IsPoweredRequest_<ContainerAllocator> Type;

  IsPoweredRequest_()
    {
    }
  IsPoweredRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> const> ConstPtr;

}; // struct IsPoweredRequest_

typedef ::realsense_camera::IsPoweredRequest_<std::allocator<void> > IsPoweredRequest;

typedef boost::shared_ptr< ::realsense_camera::IsPoweredRequest > IsPoweredRequestPtr;
typedef boost::shared_ptr< ::realsense_camera::IsPoweredRequest const> IsPoweredRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::realsense_camera::IsPoweredRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::realsense_camera::IsPoweredRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "realsense_camera/IsPoweredRequest";
  }

  static const char* value(const ::realsense_camera::IsPoweredRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::realsense_camera::IsPoweredRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsPoweredRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::realsense_camera::IsPoweredRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::realsense_camera::IsPoweredRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // REALSENSE_CAMERA_MESSAGE_ISPOWEREDREQUEST_H
