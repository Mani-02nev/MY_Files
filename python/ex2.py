#First get a year
year=int(input())
# do you want to check the year i divided 100 reminder not  equal to 0 and divided 4 reminder 0. 
if (year % 100 != 0 and 
     year % 4 == 0): 
    print(str(year)+" is a leap year")
else:
    print(str(year)+" is not leap year")
