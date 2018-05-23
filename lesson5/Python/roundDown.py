#!/usr/bin/env python3
import math
def sumRoundDown(list) :
    newList = [math.floor(n) for n in list] 
    print(newList)
    return sum(newList)
list = [2.5, 3.7, 4.2, 5.7, 7.4]
print(list)
print("The sum of the list rounded down elements are ", sumRoundDown(list))
