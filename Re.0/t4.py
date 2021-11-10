def expo(base,power):
    result=1
    for instances in range(power):
        result=result*base
    print(result)
    #return result

base=int(input("Enter the base: \n"))
power=int(input("Enter the power: \n"))
expo(base,power)
#print(expo(2,3)

print(base**power)