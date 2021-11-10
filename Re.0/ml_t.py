import pandas
#import matplotlib.pyplot as plt
data = pandas.read_csv('iphone_price.csv')
#plt.barh(data['version'], data['price'])
#plt.scatter(data['version'], data['price'])
#plt.show()
print(data.head())