from math import *
character_name =input("What is your name?")
age=21
friendsage=20
print("Hello\n" + character_name.upper() + "." )
print(character_name.upper().isupper())
print(len(character_name))
print(character_name[0])
print(character_name.index("p"))
print(character_name.replace("ho","wa"))
print("I am " + str(age) + ".")
#dont use the number(int/float-decimal) straight away with the string in a case like above.
#without converting it into a string first.
print("3 Power of my age is " + str(pow(age,3)))
print(sqrt(age))
print(max(4,5))
print(round(3.3))
