
# touch command 
touch file.test file1.test # create multiple  empty file
touch -a file.test # reset access time only
touch -m file.test # reset memory time only
touch -c file.test # d'not create file only change to time and permission
touch -t 202502111040 file.test # create perticular time and date {yy/dd/mm/tt}
touch -r file.test file1.test
mkdir file1.text file2.text # create multiple dir in one command 
mkdir -p file1.text/file.text # create path dir all dir create
mkdir -v file3.test # created message show
mkdir -m 700 file4.test # create file with permission
# rmdir file1 file2 file3 # delete multi pul dir or file 
# rmdir -v file1 # show a delete message 
# rmdir -p file1/file2 # delete path 
# rm command 
# rm file1 file2 file3 # remove content file or dir 
# rm
