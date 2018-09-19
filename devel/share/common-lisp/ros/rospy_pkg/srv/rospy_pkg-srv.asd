
(cl:in-package :asdf)

(defsystem "rospy_pkg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "SrvTutorial" :depends-on ("_package_SrvTutorial"))
    (:file "_package_SrvTutorial" :depends-on ("_package"))
  ))