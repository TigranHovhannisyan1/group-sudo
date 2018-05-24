#!/usr/bin/env python3
import math
class Circle(object) :
    def __init__(self, radius) :
        self.radius = radius
    def __str__(self) :
            return 'The radius of circle is ' + str(self.radius)
    def area(self) :
        return math.pi * (self.radius ** 2)
    def perimeter(self) :
        return 2 * math.pi * self.radius 
c = Circle(5)
print(c)
print ('The Area is', c.area()) 
print('The Perimeter is', c.perimeter())
