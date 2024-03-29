import os
from gtts import gTTS
from tkinter import *
from PIL import Image, ImageTk
func_root = Tk()
# gui logic here
func_root.geometry("1280x720")
func_root.minsize(480, 360)
func_root.maxsize(1920, 1080)
title = Label(text="Number in Words Beta")
title.pack()
j_image = Image.open('asset.jpg')
Out_j_image = ImageTk.PhotoImage(j_image)
imagery_b = Label(image=Out_j_image)
imagery_b.pack()
#b_image = PhotoImage(file="1.png")
#imagery_b = Label(image=b_image)
# imagery_b.pack()
func_root.mainloop()
language = 'en'
numbers_dict = {"0": "zero", "1": "one", "2": "two", "3": "three", "4": "five", "5": "five", "6": "six",
                "7": "seven", "8": "eight", "9": "nine"}
while True:
    breaker = False
    your_number = str(input("Enter your number: \n"))
    numbers_in_words = ""
    numbers_in_words_speech = ""
    for i in your_number:
        if i in numbers_dict:
            numbers_in_words += " " + numbers_dict.get(i)
            numbers_in_words_speech += numbers_dict.get(i)
        else:
            print("Please Enter Numbers Only. \n")
            breaker = True
            break
    if breaker == True:
        continue

    print("Your number would pronounce: \n", numbers_in_words)
    output = gTTS(text=numbers_in_words_speech, lang=language, slow=False)
    output.save("output.mp3")
    conf = str(input("Do you want me to read it out aloud? \n").lower())
    if conf == "yes":
        os.system("start output.mp3")
    else:
        print("Okay.")
