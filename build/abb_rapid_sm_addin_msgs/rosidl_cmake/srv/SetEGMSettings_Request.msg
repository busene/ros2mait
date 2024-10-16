#-------------------------------------------------------------------------------
# Description:
#   The purpose of this service definition, is to define a way to set the value
#   of a predefined RAPID variable of the custom RAPID data type "EGMSettings".
#
# Note:
#   This variable is defined in each RAPID motion task, in ABB robot controller
#   systems, that are using the RobotWare "StateMachine Add-In".
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Service request fields
#-------------------------------------------------------------------------------
# The RAPID task, where the variable exists.
string task

# New settings to use for RAPID EGM instructions.
abb_rapid_sm_addin_msgs/EGMSettings settings

