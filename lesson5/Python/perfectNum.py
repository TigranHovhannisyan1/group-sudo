#!/usr/bin/env python3
def perfect(num) :
	summ = 0
	for i in range(1, num-1):
		if num % i == 0:
			summ += i
	return summ == num
num = int(input("Input the string : "))
print(perfect(num))
