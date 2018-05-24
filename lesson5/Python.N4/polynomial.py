#!/usr/bin/env python3
class Polynomial():
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
    def __str__(self):
        a = str(self.a)
        b = str(self.b)
        c = str(self.c)
        return '{0}{1}{2} = 0'.format(a + 'x^2' if int(a) != 0 else '', '' if int(b) == 0 else '+' + b +'x' if int(b) > 0 and int(a) != 0 else b + 'x', '' if int(c) == 0 else '+' + c if int(c) > 0 else c )
    def solution(self):
        d = (self.b ** 2 - 4 * self.a * self.c)
        if d > 0 and self.a != 0 :
            x1 = (-self.b - d ** 0.5) / (2 * self.a)
            x2 = (-self.b + d ** 0.5) / (2 * self.a)
            return "x1 = " + str(x1) + "\n\tx2 = " + str(x2)
        if d == 0 :
            x = (-self.b + d ** 0.5) / 2 * self.a
            return "x = " + str(x)       
        if d < 0 :
            print("No Solution !")
            return None
        if self.a == 0:
            x = -self.c / self.b
            return "x = " + str(x)       
    def value(self, x):
        val = self.a * x * x + self.b * x + self.c
        return val

    def __add__(self, other):
        a = self.a + other.a
        b = self.b + other.b
        c = self.c + other.c
        return Polynomial(a, b, c)

    def __sub__(self, other):
        a = self.a - other.a
        b = self.b - other.b
        c = self.c - other.c
        return Polynomial(a, b, c)

    def __mul__(self, other):
        a = str(self.a * other.a)
        b = str(self.a * other.b + self.b * other.a)
        c = str(self.a * other.c + self.b * other.b + self.c * other.a)
        d = str(self.b * other.c + self.c * other.b)
        e = str(self.c * other.c)
        return '{0}{1}{2}{3}{4} = 0'.format(a + 'x^4'if int(a) != 0 else '', '' if int(b) == 0 else '+' + b +'x^3' if int(b) > 0 and int(a) != 0 else b + 'x^3','' if int(c) == 0 else '+' + c + 'x^2' if int(c) > 0 else c + 'x^2', '' if int(d) == 0 else '+' + d + 'x' if int(d) > 0 else d + 'x','' if int(e) == 0 else '+' + e if int(e) > 0 else e)
p1 = Polynomial(2, 5, 2)
p2 = Polynomial(2, 0, 2)
print("Polynomial1:", p1)
print("Polynomial2:", p2)
print("Polynomial1:", p1.solution())
print("Polynomial1 value:", p1.value(3))
print("Addition:", p1+p2)
print("Subtraction:", p1-p2)
print("Multiplication:", p1*p2)
