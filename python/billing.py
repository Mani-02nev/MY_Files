Amount=0
items=[]
while True:
    product=(input("\033[1;36mEnter A Product Name:\033[0m"))
    prize=float(input("\033[1;36mEnter A Product Prize:\033[0m"))
    quantity=int(input("\033[1;36mEnter A Quantity:\033[0m"))

    Total=quantity*prize
    Amount+=Total
    
    item ={
         "name":product,
         "prize":prize,
        "quantity":quantity,
         "total":Total
    }
    items.append(item)
    stop=input("\033[1;36mMore product Enter y:\033[0m")
    if stop != "y":
        break
print("\033[1;32m=========================================🧾Bill==========================================\033[0m")
print("\033[1;36m"+"{:<20}{:<20}{:<20}{:<20}".format("PRODUCT NAME","PRIZE","QUT","TOTAL")+"\033[0m")

for item in items :
  print("\033[1;33m{:<20}{:<1}{:<20}{:<20}{:<1}{:<20}\033[0m".format(item["name"],"₹",item["prize"] ,item["quantity"],"₹",item["total"] ))
print("\033[1;31m=========================================TOTAL=========================================\033[0m")
print("\033[33m{:<1}{:<2}\033[0m".format("TOTAL AMOUNT:₹",Amount))
