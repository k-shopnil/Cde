playlist=["Aadat","Barish","Madlove","Channa Mereya","Barish","Aadat","Madlove"]
prompts=0
item_count=int(len(playlist)) - 1 
anchor=0

while anchor <= item_count:
    playlist.remove(str(playlist[anchor]))
    if playlist.count(str(playlist[anchor])) > 1:
        conf=input("Duplicate songs found in the playlist.Do you want to merge them? \n")
        if conf == "Yes" or conf == "yes":
            prompts += 1
            playlist.remove(str(playlist[anchor]))
            print(playlist)
            
        else:
            print("As you wish,sire \n")
            anchor += 1
    else:
      anchor += 1

#playlist.remove(str(playlist[anchor]))
print("new",playlist)