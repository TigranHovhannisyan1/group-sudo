#!/usr/bin/env python3
def sum(num) :
    if num <= 1:
      	return num
    return num + sum(num - 2)
num = int(input("Input number! : "))
print(sum(num))
