is_male=bool(input("Female,Okay? "))
is_tall =bool(input("Short,Okay? "))
#only_empty_bool_input_will_return_false
#so rather input a string from user(could be found in upcoming files)

def case1():
    if is_male or is_tall:
       print("You are tall or a male or both.")
    #elif is_male and not(is_tall):
       #print("You are a short male")
    else:
       print("You are a female and short.")

def case2():
    if is_male and is_tall:
       print("You are a tall male.")
    else:
       print("You are either not-male or short or both.")


case1()
case2()
