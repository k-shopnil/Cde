def maxval():
    n1 = int(input("First number : "))
    n2 = int(input("Second number : "))
    n3 = int(input("Third number : "))
    if n1 >= n2 and n1 >= n3:
        return n1
    elif n2 >= n1 and n2 >= n3:
        return n2
    else:
        return n3

print(str(maxval()) + " is the highest value.\n")

while True:
    maxval()