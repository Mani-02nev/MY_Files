file_name=input("Enter A File Name:")
# try:
#     with open(file_name,"r") as file:
#      print(file.read())
# except FileNotFoundError:
#     print("There is no file with that name!")
try:    
    with open(file_name,"r") as file:
     print(file.read())
except Exception as i:
    print("Error:",i)