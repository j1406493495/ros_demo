#!/usr/bin/env python

import rospy
from rospy_pkg.srv import *

def handle_add_two_ints(req):
    print "Returning [%s + %s = %s]"%(req.a, req.b, (req.a + req.b))
    return SrvTutorialResponse(req.a + req.b)

def add_two_ints_server():
    rospy.init_node('service_server')
    s = rospy.Service('add_two_ints', SrvTutorial, handle_add_two_ints)
    print "Ready to add two ints."
    rospy.spin()

if __name__ == "__main__":
    add_two_ints_server()
