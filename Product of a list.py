#To calculate product of the members of a list

def mul(l):
    pro=1
    j=len(l)
    for i in range(j):
        pro = pro * int(l[i])
    return pro    
        
if __name__=="__main__":
    m=input("Enter your space-separated list ")
    l1=m.split(" ")
    z=mul(l1)
    print("The product is "+str(z))