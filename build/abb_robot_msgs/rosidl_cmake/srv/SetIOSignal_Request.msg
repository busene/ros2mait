#-------------------------------------------------------------------------------
# Description:
#   The purpose of this service definition, is to define a way to set the
#   value of an IO-signal defined in an ABB robot controller system.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Service request fields
#-------------------------------------------------------------------------------
# Name of the targeted IO-signal.
string signal

# New value for the IO-signal.
string value

