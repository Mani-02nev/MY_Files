a=5
b="ma ni gobi balu odgoug jh opojhdf "
e="mani MUTHU"
print(a,b)
c=str(a),b
print(str(c[0]))
print(type(c))
d=(str(c))+"mani"
print(d)
print(type(d))
#x=int(input("Enter a place:"))
#print(x," place of element is :",b[x])
print(set(b)|set(e))
print(set(b)&set(e))
print("mani" in b)
print("mani"not in b)
s = '     A sentence with whitespace. \n kll '
print('{}'.format(s.lstrip()))
print('{}'.format(s.rstrip("\n")))
print('{}'.format(s.strip()))
o = "hellowww"
print('{}'.format(o.lstrip('h')))
f=["apple","mango","banana"]
print(f)
print(" and ".join(f))
print('The reverse of string f is {}'.format(f[::-1]))
print('{}'.format(e.upper()))
print('{}'.format(e.lower()))
print('{}'.format(e.swapcase()))
countries = ['USA', 'Canada', 'UK', 'Australia']
cities = ['Washington', 'Ottawa','Canberra' ,'London']
for x, y in zip(countries, cities):
 print('The capital of {} is {}.'.format(x, y))
 print("Thank you")