print("Enter your query : \n")
query = str(input())
abbr = {"ASAP": "As soon as possible", "LMK": "Let me know", "TBA": "To be announced", "TBH": "To be honest",
        "TBC": "To be confirmed", "TGIF": "Thank God its Friday", "DIY": "Do it yourself",
        "RSVP": "Please wait(in french)", "BRB": "Be right back", "IMO": "In my opinion", "IDK": "I don't know",
        "AKA": "Also known as", "N/A": "Not available", "IRL": "In real life", "RT": "Retweet",
        "WDYM": "What do you mean", "TBT": "Throwback Thursday", "NBD": "No big deal", "ICYMI": "In case you missed it",
        "FOMO": "Fear of missing out", "NP": "No Problem", "WDYD": "What do you did", "LOL": "Laugh out loud",
        "ROFL": "Rolling on the floor laughing", "LMAO": "Laughing my ass off", "BTW": "By the way",
        'SOS': "Save our ship/soul", 'query': {}}

print(abbr.get(str(query)), "Sorry I don't know that,yet.\n")

while True:
    print("Enter your query : \n")
    query = str(input())
    print(abbr.get(str(query)), "Sorry I don't know that,yet.\n")
    if query not in abbr:
        break

conf = str((input("Can you find it and tell me yourself the full form? ")))
if conf == "Yes":
    FF = str(input("What is it? \n"))
    abbr[query].append(FF)
else:
    print("Should I google it for you?\n")

    # this_and_TTS-wheelIssues
    # New_learning = {"NEW": FF}
