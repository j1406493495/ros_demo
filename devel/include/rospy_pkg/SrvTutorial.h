// Generated by gencpp from file rospy_pkg/SrvTutorial.msg
// DO NOT EDIT!


#ifndef ROSPY_PKG_MESSAGE_SRVTUTORIAL_H
#define ROSPY_PKG_MESSAGE_SRVTUTORIAL_H

#include <ros/service_traits.h>


#include <rospy_pkg/SrvTutorialRequest.h>
#include <rospy_pkg/SrvTutorialResponse.h>


namespace rospy_pkg
{

struct SrvTutorial
{

typedef SrvTutorialRequest Request;
typedef SrvTutorialResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SrvTutorial
} // namespace rospy_pkg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rospy_pkg::SrvTutorial > {
  static const char* value()
  {
    return "d431cae597499d244ef1c576e21358c8";
  }

  static const char* value(const ::rospy_pkg::SrvTutorial&) { return value(); }
};

template<>
struct DataType< ::rospy_pkg::SrvTutorial > {
  static const char* value()
  {
    return "rospy_pkg/SrvTutorial";
  }

  static const char* value(const ::rospy_pkg::SrvTutorial&) { return value(); }
};


// service_traits::MD5Sum< ::rospy_pkg::SrvTutorialRequest> should match 
// service_traits::MD5Sum< ::rospy_pkg::SrvTutorial > 
template<>
struct MD5Sum< ::rospy_pkg::SrvTutorialRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rospy_pkg::SrvTutorial >::value();
  }
  static const char* value(const ::rospy_pkg::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rospy_pkg::SrvTutorialRequest> should match 
// service_traits::DataType< ::rospy_pkg::SrvTutorial > 
template<>
struct DataType< ::rospy_pkg::SrvTutorialRequest>
{
  static const char* value()
  {
    return DataType< ::rospy_pkg::SrvTutorial >::value();
  }
  static const char* value(const ::rospy_pkg::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rospy_pkg::SrvTutorialResponse> should match 
// service_traits::MD5Sum< ::rospy_pkg::SrvTutorial > 
template<>
struct MD5Sum< ::rospy_pkg::SrvTutorialResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rospy_pkg::SrvTutorial >::value();
  }
  static const char* value(const ::rospy_pkg::SrvTutorialResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rospy_pkg::SrvTutorialResponse> should match 
// service_traits::DataType< ::rospy_pkg::SrvTutorial > 
template<>
struct DataType< ::rospy_pkg::SrvTutorialResponse>
{
  static const char* value()
  {
    return DataType< ::rospy_pkg::SrvTutorial >::value();
  }
  static const char* value(const ::rospy_pkg::SrvTutorialResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPY_PKG_MESSAGE_SRVTUTORIAL_H