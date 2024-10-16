

#-------------------------------------------------------------------------------
# Service response fields
#-------------------------------------------------------------------------------
# Contents of the file.
string contents

# Service success/failure indicator.
# Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.
uint16 result_code

# Status message (empty if service succeeded).
string message
