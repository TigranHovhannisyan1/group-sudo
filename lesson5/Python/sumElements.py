#!/usr/bin/env python3
def sum(num) :
    summ = 0
    for i in num:
        summ += int(i)
    return summ
num = input("Enter the Number : ")
print(sum(num))
