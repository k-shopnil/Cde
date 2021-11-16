import numpy as np
tup=(int,input().split(",",3))
#tup=(7,8,9)
listify=list(tup)
listify.reverse()
print(np.array(listify,dtype=object))