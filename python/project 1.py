# count the words in a string rom itertools import count
str_ing=str(input('Enter A String: '))
# print(str_ing)
# print(type(str_ing))
# list_of_words=print(str_ing.split(","))
x=(list(str_ing.split()))
y=(len(str_ing.split()))
lst=[]
print("Total count of words:",y) 
for i in range(0,y,1):
    g=x.count(x[i])
    lst.append(g)
x_str=list(x)
lst_st=(list(lst)) 
zipped=zip(x_str,lst_st)
print(list(set(zipped)))



#    if x.count(x[i])!=1:
#       x.remove(str(x[i]))
# z=(input("Enter A changing element:" ))
# y=x[z]
# cap=print(y.capitalize())
# x.insert(y,cap)
# del x[y+1]
# print(x)
