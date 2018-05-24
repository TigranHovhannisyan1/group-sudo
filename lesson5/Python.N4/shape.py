#!/usr/bin/env python3
import math
class Shape(object) :
    def __eq__(self, other) :
        return self.area() == other.area()
    def __lt__(self, other) :
        return self.circum() < other.circum()
class Rectangle(Shape) :
    def __init__(self, length, width) :
        self.length = length
        self.width = width
    def __str__(self) :
            return 'The Length of Rectangle is ' + str(self.length) + ', Width is ' + str(self.width) + ', and Area is ' + str(self.area())
    def area(self) :
        return self.length * self.width
    def circum(self) :
        return 2 * (self.length + self.width)
class Square(Rectangle) :
    def __init__(self, side) :
        Rectangle.__init__(self, side, side)
    def __str__(self) :
        return 'The Side of Square is ' + str(self.length)
class Circle(Shape) :
    def __init__(self, radius) :
        self.radius = radius
    def __str__(self) :
            return 'The Diagonal of Circle is ' + str(2*self.radius)
    def __lt__(self,other):
        return self.radius < other.radius
    def area(self) :
        return math.pi * (self.radius ** 2)
    def circum(self) :
        return 2 * math.pi * self.radius 
c = Circle(10)
k = Circle(11)
print("c", c, "Area is", c.area(), "Circum is", c.circum())
print("k", k, "Area is", k.area(), "Circum is", k.circum())
print("c < k ->", c < k)
r = Rectangle (2,4)
s = Square(8)
print(s, "Area is",s.area(), "Circum is", s.circum())
print(r, "Circum is", r.circum())
square1 = Square(3)
print(square1.circum()) # 12.0
square2 = Square(4)
print(square1 > square2) # False
rectangle1 = Rectangle(4, 4)
print(square2 == rectangle1) # True
circle1 = Circle(5)
print(square1 < circle1) # True
