#!/usr/bin/env python3
class Complex(object) :
    def __init__(self, real, imag) :
        self.real = real
        self.imag = imag
    def __str__(self) :
        if self.real !=0 and self.imag > 0 :
            return str(self.real) + '+' + str(self.imag) + 'i'
        if self.real != 0 and self.imag <  0 :
            return str(self.real) + str(self.imag) + 'i'
        if self.imag == 0 :
            return str(self.real)
        if self.real == 0 :
            return str(self.imag) + 'i'
    def __add__(self, other) :
        return Complex(self.real + other.real, self.imag + other.imag)
    def __sub__(self, other) :
        return Complex(self.real - other.real, self.imag - other.imag)
    def __mul__(self, other) :
        return Complex(self.real * other.real - self.imag * other.imag, self.imag * other.real + self.real * other.imag)
    def __truediv__(self, other) :
        if other.real != 0 and other.imag != 0 :
            return Complex((self.real * other.real + self.imag * other.imag) / (other.real ** 2 + other.imag ** 2), (self.imag * other.real - self.real * other.imag) / (other.real ** 2 + other.imag ** 2))
        return None 
    def __iadd__(self, other):
        self.real += other.real
        self.imag += other.imag
        return Complex(self.real, self.imag)
    def __isub__(self, other):
        self.real -= other.real
        self.imag -= other.imag
        return Complex(self.real, self.imag)
    def __imul__(self, other):
        self = self * other
        return self
    def __idiv__(self, other):
        self = self / other
        return self
    def __abs__(self):
        return (self.real ** 2 + self.imag ** 2) ** 0.5
    def __eq__(self, other) :
       return (self.real == other.real) and  (self.imag == other.imag)
    def __ne__(self, other):
        return (self.real != other.real and self.imag != other.imag)
    def __lt__(self, other):
        return abs(self) < abs(other)
    def __gt__(self, other):
        return abs(self) > abs(other)
    def __le__(self, other):
        return abs(self) <= abs(other)
    def __ge__(self, other):
        return abs(self) >= abs(other)
    def inverse(self):
        return Complex(self.real / (abs(self) ** 2), (-self.imag / (abs(self) ** 2)))

a = Complex(2, 4)
b = Complex(5, 8)
c = Complex(0, 10)
d = Complex(25, 0)
e = Complex(2, 4)
print('a =', a)
print('b =', b)
print('c =', c)
print('d =', d)
print('e =', e)
print ('a + b =', a + b) 
print('a - b =', a - b)
print('a * b =', a * b)
print('a / b =', a / b)
a += b
print('a += b =', a)
a -= b
print('a -= b ', a)
a *= b
print('a *= b ', a)
a /= b
print('a /= b ', a)
print('Inverse a =', a.inverse())
print('Absalute b =', abs(b))
print('a >= e ->', a >= e)
print('a <= c ->', a <= c)
print('c < d ->', c < d)
print('b > e ->', b > e)
