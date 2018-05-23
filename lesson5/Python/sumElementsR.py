#!/usr/bin/env python3
def sum(num) :
    if len(num) == 0:
      	return 0
    return int(num[0]) + int(sum(num[1:]))
num = input("Input number! : ")
print(sum(num))
