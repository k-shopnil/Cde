
sheet = open("Re.0\iphone_pricesxtra.csv", "r")
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
