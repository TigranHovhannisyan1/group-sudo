#!/usr/bin/env python3
import unittest

def isPrime(a):
    '''"a" is prime or no ?'''
    if a <= 0:
        return False
    for i in range(2,a):
        if a % i == 0:
            return False
    return True

class MyUnittest(unittest.TestCase):
    '''Tests for isPrime function'''
    def test_1IsPrime(self):
        '''Is 1 correctly determined to be prime?'''
        self.assertTrue(isPrime(1),"1 is prime")
    def test_2IsPrime(self):
        '''Is 2 correctly determined to be prime?'''
        self.assertTrue(isPrime(2),"2 is prime")
    def test_0IsNotPrime(self):
        '''Is 0 correctly determined not to be prime?'''
        self.assertFalse(isPrime(0),"0 is not prime")
    def test_1000IsNotPrime(self):
        '''Is 1000 correctly determined not to be prime?'''
        self.assertFalse(isPrime(1000),"0 is not prime")
    def testNegativeNumbers(self):
        '''Is negative numbers correctly determined not to be prime?'''
        for i in range (-10,-1) :
            self.assertFalse(isPrime(i),"Negative numbers is not prime")

if __name__=='__main__':
    unittest.main()
