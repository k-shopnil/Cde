#least memory usage
def utility(l):
    for count,it in enumerate(inp,100):
        print(count,it) 
inp=["A","B","C"]
utility(inp)

#alternate way with return* and slicing(more memory!!)

print("\n") #this is a cheap line break hack :P

def utility(l):
    out=[]
    [print(count,it) for count,it in enumerate(inp,100)]
    return out

inp=["A","B","C",]
utility(inp)