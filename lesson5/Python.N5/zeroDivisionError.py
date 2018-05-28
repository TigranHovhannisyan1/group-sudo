#!/usr/bin/env python3
try:
    a = int(input("Input first number! :"))
    b = int(input("Input second number! :"))
    a = a / b
except ZeroDivisionError :
    print("Can't divide by zero") 
