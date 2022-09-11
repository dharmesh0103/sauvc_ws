// Generated by gencpp from file freefloating_gazebo/ControlTypeRequest.msg
// DO NOT EDIT!


#ifndef FREEFLOATING_GAZEBO_MESSAGE_CONTROLTYPEREQUEST_H
#define FREEFLOATING_GAZEBO_MESSAGE_CONTROLTYPEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace freefloating_gazebo
{
template <class ContainerAllocator>
struct ControlTypeRequest_
{
  typedef ControlTypeRequest_<ContainerAllocator> Type;

  ControlTypeRequest_()
    : axes()  {
    }
  ControlTypeRequest_(const ContainerAllocator& _alloc)
    : axes(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _axes_type;
  _axes_type axes;





  typedef boost::shared_ptr< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ControlTypeRequest_

typedef ::freefloating_gazebo::ControlTypeRequest_<std::allocator<void> > ControlTypeRequest;

typedef boost::shared_ptr< ::freefloating_gazebo::ControlTypeRequest > ControlTypeRequestPtr;
typedef boost::shared_ptr< ::freefloating_gazebo::ControlTypeRequest const> ControlTypeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator1> & lhs, const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.axes == rhs.axes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator1> & lhs, const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace freefloating_gazebo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52951d9d51995d256d1f3d1a265444f8";
  }

  static const char* value(const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52951d9d51995d25ULL;
  static const uint64_t static_value2 = 0x6d1f3d1a265444f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "freefloating_gazebo/ControlTypeRequest";
  }

  static const char* value(const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# send an array of axis name that should have their control type modified\n"
"string[] axes\n"
;
  }

  static const char* value(const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.axes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlTypeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::freefloating_gazebo::ControlTypeRequest_<ContainerAllocator>& v)
  {
    s << indent << "axes[]" << std::endl;
    for (size_t i = 0; i < v.axes.size(); ++i)
    {
      s << indent << "  axes[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.axes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FREEFLOATING_GAZEBO_MESSAGE_CONTROLTYPEREQUEST_H
