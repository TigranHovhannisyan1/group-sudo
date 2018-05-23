#!/usr/bin/env python3
b = 1
string = input("Input String : ")
i = -1
for var in string :
#	print(len(string) - 1)
	if  var != string[i] :
		b = 0
	i -= 1
if b :
	print("Palindrom e")
else :
	print("Palindrom che")	
