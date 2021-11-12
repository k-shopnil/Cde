playlist=["Aadat","Barish","Channa Mereya","Barish"]

updates=[]

for item in playlist:
    if item not in playlist:
        updates.append(item)
    else:
        conf=input("Duplicate songs found in the playlist.Do you want to merge them? \n")
        if conf == "Yes" or conf == "yes":
            if item not in playlist:
                updates.append(item)
                print(str(updates))
        else:
            print("As you wish,sire.")
            print(playlist)