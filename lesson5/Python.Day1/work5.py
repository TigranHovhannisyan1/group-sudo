#!/usr/bin/env python3
b = 1
string = input("Input String : ")
print(string)
string = string[-1] + string[1: -1] + string[0]
print(string)

