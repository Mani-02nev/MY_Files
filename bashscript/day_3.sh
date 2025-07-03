
# stat commend
stat day_2.sh # show a file information and full details 
stat -f "% N" day_2.sh # show only name f is a format 
stat -f "%z" day_2.sh # show only size
stat -t day_2.sh # show only short format
stat -Sp day_2.sh # show a permission
stat -Sm day_2.sh #modified time
stat -x day_2.sh # full info
alias c="ls"