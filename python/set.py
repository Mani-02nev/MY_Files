student = {"name": "Mani", "age": 20,"a":5}
print(student.get("name"))       # Mani
print(student.get("grade"))      # None
print(student.get("grade", "NA"))# NA
print(student.get("age"))
print(student.get("a"))
for i,n in student.items():
    print(i,":",n)
mani={1,2,3,4}
print(mani)
mani.add(500)
print(mani)
mani.remove(500)
print(mani)
### mani.remove(8)
mani.discard(8)