# maxsplit = 1, returns a list with 2 elements
# “,” as a separator
n1,n2=input("Give me the numbers: ").split(",",1)
result = float(n1) + float(n2)

print("Your result is " + str(result) + ",sire.")