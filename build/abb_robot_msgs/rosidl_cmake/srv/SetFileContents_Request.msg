#-------------------------------------------------------------------------------
# Description:
#   The purpose of this service definition, is to define a way to set the
#   contents of a file in an ABB robot controller system.
#
# Note:
#   The file will be placed in the system's home directory. If the file
#   doesn't exist, then it will be created, otherwise it will be overwritten.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Service request fields
#-------------------------------------------------------------------------------
# Filename (including file extension) for the file in the system.
string filename

# New contents for the file.
string contents

