#!/usr/bin/env python3
try:
    list1 = [8, 3, 4, 5, 45]
    list2 = [10, 1, 15, 0]
    for i in range(len(list1)):
        result = list1[i] / list2[i]
        print(result)
except IndexError as error:
        print(error)
except ZeroDivisionError as error :
        print(error)
except TypeError as error :
        print(error)
