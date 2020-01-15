#Program to check which type of triangle it is based on input of length of sides

l = input("Input the three sides of a triangle(space-separated) ")
l1=l.split(" ")
same=0
for i in range(3):
    for j in range(3):
        if i!=j :
            if int(l1[i])==int(l1[j]):
                same = same+1
same = same//2
if same == 0:
    print("It is a scalene triangle")
if same == 1:
    print("It is an isoceles triangle")
if same == 3:
    print("It is an equilateral triangle")  