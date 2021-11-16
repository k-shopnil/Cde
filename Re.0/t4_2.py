#writing
sheet = open("Re.0\iphone_price.csv","a")
sheet.write("\n13,1300")
sheet.close()

#reading
sheet = open("Re.0\iphone_price.csv","r")
print(sheet.readable())
print(sheet.read()) #read as it is
print(sheet.readlines()) #read as a list

print(sheet.readline())
print(sheet.readline())

print(sheet.readlines())
print(len(sheet.readlines()))

for data in sheet.readlines():
    print(data)
sheet.close()

'''
#write from scratch
sheet = open("Re.0\iphone_price.csv","w")
sheet.write("Average,1100")
sheet.close()

'''
