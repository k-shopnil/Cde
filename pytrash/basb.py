##try-expect F
import numpy as np
try:
    numbers=(int(input("Enter thr first number: \n")),int((input("Enter the second number: \n"))))
    list(numbers).reverse()
    print(np.array(numbers))
except ValueError as DTE:
    print(DTE)

