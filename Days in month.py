l1=["January","February","March","April","May","June","July","August","September","October","November","December"]
l2=[31,28,31,30,31,30,31,31,30,31,30,31]
l=input("Enter the month ")
c=0
for i in range(12):
    if(l in l1[i]):
        print("Number of days in "+str(l1[i])+" is "+str(l2[i]))