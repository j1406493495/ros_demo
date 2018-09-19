;; Auto-generated. Do not edit!


(when (boundp 'rospy_pkg::MsgTutorial)
  (if (not (find-package "ROSPY_PKG"))
    (make-package "ROSPY_PKG"))
  (shadow 'MsgTutorial (find-package "ROSPY_PKG")))
(unless (find-package "ROSPY_PKG::MSGTUTORIAL")
  (make-package "ROSPY_PKG::MSGTUTORIAL"))

(in-package "ROS")
;;//! \htmlinclude MsgTutorial.msg.html


(defclass rospy_pkg::MsgTutorial
  :super ros::object
  :slots (_stamp _data ))

(defmethod rospy_pkg::MsgTutorial
  (:init
   (&key
    ((:stamp __stamp) "")
    ((:data __data) 0)
    )
   (send-super :init)
   (setq _stamp (string __stamp))
   (setq _data (round __data))
   self)
  (:stamp
   (&optional __stamp)
   (if __stamp (setq _stamp __stamp)) _stamp)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; string _stamp
    4 (length _stamp)
    ;; int32 _data
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _stamp
       (write-long (length _stamp) s) (princ _stamp s)
     ;; int32 _data
       (write-long _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _stamp
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _stamp (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _data
     (setq _data (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get rospy_pkg::MsgTutorial :md5sum-) "742805c18e04d6693e5cb7da56c45e09")
(setf (get rospy_pkg::MsgTutorial :datatype-) "rospy_pkg/MsgTutorial")
(setf (get rospy_pkg::MsgTutorial :definition-)
      "string stamp
int32 data

")



(provide :rospy_pkg/MsgTutorial "742805c18e04d6693e5cb7da56c45e09")


