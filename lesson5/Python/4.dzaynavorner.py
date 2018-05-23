#!/usr/bin/env python3
word = input("Input the word! : ")
vowels = 'AEIOUaeiou'
output = ''
for i in word:
    if vowels.find(i) > 0 :
        output += i
print(output)

