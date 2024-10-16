#-------------------------------------------------------------------------------
# Description:
#   The purpose of this service definition, is to define a way to set the
#   speed ratio for an ABB robot controller system's RAPID motions
#   (e.g. MoveAbsJ and MoveL).
#
# Note:
#   The speed ratio must be an integer in the range [0, 100] (i.e. inclusive).
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Service request fields
#-------------------------------------------------------------------------------
# New speed ratio.
uint8 speed_ratio

