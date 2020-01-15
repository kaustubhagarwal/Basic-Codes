#Program to display median of 3 numbers

l = input("Enter 3 values ")
l1=l.split(" ")
l1.sort()
print("The median is "+str(l1[1]))