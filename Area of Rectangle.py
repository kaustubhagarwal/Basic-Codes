# Program to calculate area of a rectangle using OOP concept

class rect:
    length=0
    width=0
    def area(self):
        return self.length * self.width

if __name__=="__main__":
    rectangle=rect()
    rectangle.length= int(input("Enter length of the rectangle "))
    rectangle.width= int(input("Enter width of the rectangle "))
    print("\nArea of the rectangle is "+str(rectangle.area()))