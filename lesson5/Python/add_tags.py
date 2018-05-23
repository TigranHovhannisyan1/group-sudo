#!/usr/bin/env python3
def addTags(i, Str) :
    tag = ('<' + i + '>' + Str + '</' + i + '>')
    return tag
i = input("Enter the letter for tag : ")
Str = input("Input the string : ")
print(addTags(i, Str))
