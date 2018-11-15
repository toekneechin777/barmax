// Generated by gencpp from file baxter_maintenance_msgs/CalibrateArmData.msg
// DO NOT EDIT!


#ifndef BAXTER_MAINTENANCE_MSGS_MESSAGE_CALIBRATEARMDATA_H
#define BAXTER_MAINTENANCE_MSGS_MESSAGE_CALIBRATEARMDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_maintenance_msgs
{
template <class ContainerAllocator>
struct CalibrateArmData_
{
  typedef CalibrateArmData_<ContainerAllocator> Type;

  CalibrateArmData_()
    : suppressWriteToFile(false)  {
    }
  CalibrateArmData_(const ContainerAllocator& _alloc)
    : suppressWriteToFile(false)  {
  (void)_alloc;
    }



   typedef uint8_t _suppressWriteToFile_type;
  _suppressWriteToFile_type suppressWriteToFile;





  typedef boost::shared_ptr< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> const> ConstPtr;

}; // struct CalibrateArmData_

typedef ::baxter_maintenance_msgs::CalibrateArmData_<std::allocator<void> > CalibrateArmData;

typedef boost::shared_ptr< ::baxter_maintenance_msgs::CalibrateArmData > CalibrateArmDataPtr;
typedef boost::shared_ptr< ::baxter_maintenance_msgs::CalibrateArmData const> CalibrateArmDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_maintenance_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': True, 'HasHeader': False}
// {'baxter_maintenance_msgs': ['/home/anthony/ros_ws/src/baxter_common/baxter_maintenance_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ba9ee949ea363f7bcfc8cc74e0bcb69d";
  }

  static const char* value(const ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xba9ee949ea363f7bULL;
  static const uint64_t static_value2 = 0xcfc8cc74e0bcb69dULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_maintenance_msgs/CalibrateArmData";
  }

  static const char* value(const ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool suppressWriteToFile\n\
";
  }

  static const char* value(const ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.suppressWriteToFile);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalibrateArmData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_maintenance_msgs::CalibrateArmData_<ContainerAllocator>& v)
  {
    s << indent << "suppressWriteToFile: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.suppressWriteToFile);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_MAINTENANCE_MSGS_MESSAGE_CALIBRATEARMDATA_H
