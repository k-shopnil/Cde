# removing duplicated from the list using naive methods 

# initializing list 
sam_list = [11, 13, 15, 16, 13, 15, 16, 11] 
print ("The list is: " + str(sam_list)) 

# remove duplicated from list 
result = [] 
for i in sam_list: 
    if i not in result: 
        result.append(i) 

# printing list after removal 
print ("The list after removing duplicates : " + str(result)) 


# removing duplicated from the list using list comprehension 

# initializing list 
sam_list = [11, 13, 15, 16, 13, 15, 16, 11] 
print ("The list is: " + str(sam_list)) 

 
# to remove duplicated from list 
result = [] 
[result.append(x) for x in sam_list if x not in result] 

# printing list after removal 
print ("The list after removing duplicates: " + str(result))



# removing duplicated from the list using set() 

# initializing list 
sam_list = [11, 15, 13, 16, 13, 15, 16, 11] 
print ("The list is: " + str(sam_list)) 

# to remove duplicated from list 
sam_list = list(set(sam_list)) 

# printing list after removal 
# ordering distorted
print ("The list after removing duplicates: " + str(sam_list)) 




# removing duplicated from the list using list comprehension + enumerate() 

# initializing list 
sam_list = [11, 15, 13, 16, 13, 15, 16, 11] 
print ("The list is: " + str(sam_list)) 

# to remove duplicated from list 
result = [i for n, i in enumerate(sam_list) if i not in sam_list[:n]] 

# printing list after removal 
print ("The list after removing duplicates: " + str(result))




# removing duplicated from list using collections.OrderedDict.fromkeys() 
from collections import OrderedDict 

# initializing list 
sam_list = [11, 15, 13, 16, 13, 15, 16, 11] 
print ("The list is: " + str(sam_list)) 

# to remove duplicated from list 
result = list(OrderedDict.fromkeys(sam_list)) 

# printing list after removal 
print ("The list after removing duplicates: " + str(result)) 