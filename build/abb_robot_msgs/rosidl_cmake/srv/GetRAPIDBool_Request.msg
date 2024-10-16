#-------------------------------------------------------------------------------
# Description:
#   The purpose of this service definition, is to define a way to get the value
#   of a RAPID 'bool' symbol (e.g. a variable) defined in an ABB robot
#   controller system.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Service request fields
#-------------------------------------------------------------------------------
# Path to the targeted RAPID symbol.
abb_robot_msgs/RAPIDSymbolPath path

