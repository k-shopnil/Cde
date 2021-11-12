playlist=["Aadat","Barish","Channa Mereya","Barish"]
anchor=0
for items in playlist[1:3]:
    while playlist[anchor]-playlist[items.index] != 0:
        anchor += 1
if playlist[anchor]-playlist[items.index] == 0 :
    conf=input("Duplicate songs found in the playlist.Do you want to merge them?")
    if conf == "Yes":
        print()


