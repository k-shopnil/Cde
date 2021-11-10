p_age=[31,23,25,35,31,27,21]
pioneers= ["Kevin","Turing","Ada","Babbage","Neuman","Linus"]
pioneers.insert(6,"Shopnil")
pioneers.append("Clancy")
#tuple=(1,2)
#print(tuple[1])
#pioneers.remove("Shopnil")
#pioneers.clear()
#pioneers.pop()
#p_age.reverse()
#tuplesaremorelikevariablesmorethanlists
pioneers.sort()
pioneers.extend(p_age)
print(pioneers[1:6])
print(pioneers[6])
print(pioneers.index("Clancy"))
print(pioneers.count("Shopnil"))
