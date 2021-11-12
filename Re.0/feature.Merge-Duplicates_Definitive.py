from collections import OrderedDict
playlist_main=["Aadat","Dua","Barish","Channa Mereya","Barish"]
playlist=sorted(playlist_main)
caching=[]

for items in playlist:
    caching.append(items)
    if items in caching:
        conf=input("Duplicate songs found in the playlist.Do you want to merge them? \n")
        if conf == "Yes" or conf == "yes":
            updated=list(OrderedDict.fromkeys(playlist))
            print(updated)
            break
        else:
            print("As you wish,sire.\n")
            print(playlist)
            break
    else:
        print(caching.sort())