print("*** GUESS THE ANIMAL NAME ***")
print("------------------------------ \n")
print("<Guess the number between 0-20 in just THREE attempts>\n")
secret=int(5)
attempt_count=0
attempt_limit=3
out_of_attempts = False
guess=""

while secret != guess and out_of_attempts == False:

    if attempt_count < attempt_limit:

        guess=int(input("Enter your guess: \n"))
        attempt_count += 1
    else:
        out_of_attempts = True

if out_of_attempts:
    print("You're out of guess.Better luck next time.")
else:
    print("You win!")