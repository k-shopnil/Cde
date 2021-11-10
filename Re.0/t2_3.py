def adder():
    n1=input("Enter the first number:")
    n2=input("Enter the second number:")
    print(int(n1)+int(n2))

print("Your result is")
adder()

def sayhi(name,age):
    print("Hi," + name + ".I guess you are " + age +".")

sayhi("Shopnil","21")

def cube(n):
    return n*n*n

print(cube(5))
