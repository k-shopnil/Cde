from oxforddictionaries.words import OxfordDictionaries

o = OxfordDictionaries(app_id, app_key)

relax = o.get_synonyms("absorb").json()

synonyms = relax['results'][0]['lexicalEntries'][0]['entries'][0]['senses'][0]['synonyms']

for s in range(10):
    print(synonyms[s]['text'])

