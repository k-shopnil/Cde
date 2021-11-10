import  requests
import json
# TODO: replace with your own app_id and app_key
app_id = '9f0905e0'
app_key = '70af5239f6b20becd18a2e92e7cbe724'
language = 'en-gb'
word_id = input()
url = 'https://od-api.oxforddictionaries.com/api/v2/entries/'  + language + '/'  + word_id.lower()
r = requests.get(url, headers = {'app_id' : app_id, 'app_key' : app_key})
if r:
    mean_json = r.json()
    mean_list = []

    for result in mean_json['results']:
        for lexicalEntry in result['lexicalEntries']:
            for entry in lexicalEntry['entries']:
                for sense in entry['senses']:
                    mean_list.append(sense['definitions'][0])

    print(word_id + " stands for:")

    for i in mean_list:
        print(i)
else:
    print("Extremely sorry.I didn't find anything.")