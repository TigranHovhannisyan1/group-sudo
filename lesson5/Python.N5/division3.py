#!/usr/bin/env python3
while True:
    try:
        num = int(input("Input the integer number! :"))
    except ValueError:
        raise ValueError("The entered number must be an integer!")
        
    else :
        if (num % 3 != 0) :
            raise TypeError("This number should be divided into 3i", num)
        else: 
            print("Perfect!")
            break
