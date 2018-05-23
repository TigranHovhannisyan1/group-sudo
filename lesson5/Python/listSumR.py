#!/usr/bin/env python3
def sum(list):
    summ = 0
    for i in list:
        if (type(i) == type([])):
            summ += sum(i)
        else:
            summ += i
    return summ

list = [[1, 2], 3, [4, 5, 6],7, [8, 9]]
print(list)
print( "Sumi =", sum(list))
