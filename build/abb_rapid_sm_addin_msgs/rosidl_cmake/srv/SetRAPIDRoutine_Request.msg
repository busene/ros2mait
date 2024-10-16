#-------------------------------------------------------------------------------
# Description:
#   The purpose of this service definition, is to define a way to set the value
#   of a predefined RAPID variable for specifying a custom RAPID routine to run.
#
# Note:
#   This variable is defined in each RAPID motion task, in ABB robot
#   controller systems, that are using the RobotWare "StateMachine Add-In".
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Service request fields
#-------------------------------------------------------------------------------
# The RAPID task that runs the "StateMachine Add-In" instance.
string task

# Desired custom RAPID routine to run.
string routine

