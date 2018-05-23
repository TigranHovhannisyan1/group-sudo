#!/usr/bin/env python3
def palindrom(string) :
    if len(string) <= 1:
      	return True
    if string[0] != string[-1]:
        return False
    return palindrom(string[1:-1])
string = input("Input string! : ")
print(palindrom(string))
