
 #!/bin/bash
CURRENT_USER=$(whoami)
echo "You are logged in as: $CURRENT_USER"
# who commend and options
who  -a # all information,Equivalent to -b,-t,-u
who -H # write a hading line
who -m # terminal attached to standard input only
who -q # show all users and count of users
who -r # ran Level
who -b # last login time
who -u #idle time
who -t # show run level
w # show all user and working details 
w -h # without heading print
w -i # idle time
w -s # less details
w -u # user format 
w -o # user id
w -v # version details