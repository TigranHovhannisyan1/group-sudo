#!/usr/bin/env python3
a = 0
b = 1
c = a + b
print(a, b, end = ' ')
while c <= 50:
	a = b
	b = c
	print(c, end = ' ')
	c = a + b
print()
