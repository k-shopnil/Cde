secret=("Elephant", "elephant")
guess =""
print("*** GUESS THE ANIMAL NAME ***")
print("------------------------------ ")
guess=input("Enter your guess : \n")
if guess == secret[0] or guess == secret[1]:
    print("You win!")
else:
    while guess != secret[0] and guess != secret[1]:
        
        guess=input("Try again : \n")
    print("Right answer! You win!")

