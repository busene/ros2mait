

#-------------------------------------------------------------------------------
# Service response fields
#-------------------------------------------------------------------------------
# The settings used for RAPID EGM instructions.
abb_rapid_sm_addin_msgs/EGMSettings settings

# Service success/failure indicator.
# Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.
uint16 result_code

# Status message (empty if service succeeded).
string message
