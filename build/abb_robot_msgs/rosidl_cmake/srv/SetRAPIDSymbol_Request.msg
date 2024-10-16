#-------------------------------------------------------------------------------
# Description:
#   The purpose of this service definition, is to define a way to set the value
#   of a RAPID symbol (e.g. a variable) defined in an ABB robot controller
#   system.
#
# Note:
#   The RAPID symbol's new value must be in raw text format.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Service request fields
#-------------------------------------------------------------------------------
# Path to the targeted RAPID symbol.
abb_robot_msgs/RAPIDSymbolPath path

# New value (in raw text format) for the RAPID symbol.
string value

