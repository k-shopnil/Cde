#try_expectF
c=0
while True:
    try:
        if c == 0:
            number=int(input("Enter a number: "))
        else:
            number=int(input("Enter again: "))

        res=number**3
        print("The cube to the number given is : " + str(res))
    except ValueError as DTE:
                             print("Enter a valid number.")
                             c += 1
