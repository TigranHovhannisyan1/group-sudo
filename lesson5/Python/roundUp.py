#!/usr/bin/env python3
import math
def sumRoundUp(list) :
    newList = [math.ceil(n) for n in list] 
    print(newList)
    return sum(newList)
list = [2.5, 3.7, 4.2, 5.7, 7.4]
print(list)
print("The sum of the list rounded up elements are ", sumRoundUp(list))
