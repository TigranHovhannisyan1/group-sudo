#!/usr/bin/env python3
class Rectangle(object) :
    def __init__(self, length, width) :
        self.length = length
        self.width = width
    def __str__(self) :
            return 'Length is ' + str(self.length) + ', Width is ' + str(self.width)
    def area(self) :
        return self.length * self.width
    def perimeter(self) :
        return 2 * (self.length + self.width)
r = Rectangle(5, 6)
print(r)
print ('Area is', r.area()) 
print('Perimeter is', r.perimeter())
