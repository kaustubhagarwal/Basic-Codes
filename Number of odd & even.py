# Program to calculate number of even and odd numbers in a list

l = input("Enter your space-separated list (make sure not to enter a space as your last character) \n")
odd=0
even=0
l1=l.split(" ")
for i in range(len(l1)):
    if int(l1[i]) % 2 == 0:
        even = even+1
    else:
        odd = odd+1
print("Number of even numbers are: "+str(even))
print("Number of odd numbers are: "+str(odd))
