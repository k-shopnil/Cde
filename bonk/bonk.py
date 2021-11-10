#(from udpy import UrbanClientclient = UrbanClient()defs = client.get_definition('netflix and chill')print(defs))

#from googlesearch import search
#print(search("POV"))

#import urbandict
#uber=urbandict.define("Love",1)
#print(uber)

# Import Required Librares
from tkinter import *
from PyDictionary import PyDictionary

# Create instances and objests
dictionary = PyDictionary()
win =Tk()

#Define the size of the window
win.geometry("700x400")

win.title("Python Dictionary")

#Define Helper Function to use the other atributes of PyDictionary Class
def dict():
   meaning.config(text=dictionary.meaning(word.get())['Noun'][0])

#Define Labels and Buttons
Label(win, text="Dictionary", font=("Times New Roman" ,20)).pack(pady=20)

# Frame 1
frame = Frame(win)
Label(frame, text="Type any Word ", font=("Poppins bold", 15)).pack(side=LEFT)
word = Entry(frame, font=("Times New Roman", 15))
word.pack()
frame.pack(pady=10)
# Frame 2
frame1 = Frame(win)
Label(frame1, text="Meaning:", font=("Aerial", 18)).pack(side=LEFT)
meaning = Label(frame1, text="", font=("Poppins",15), width= 30)
meaning.pack()
frame1.pack(pady=10)

Button(win, text="Find", font=("Poppins bold",15), command=dict).pack()
