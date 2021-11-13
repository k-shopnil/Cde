def converter(phrase):
    conversion=""
    for letter in phrase:
        if letter.lower() in "aeiou":
            if letter.isupper():
                conversion=conversion+"B"
            else:
                conversion=conversion+"b"
        
        else:
            conversion=conversion+letter
    return conversion

print(converter(input("Enter your text: \n")))