#!/usr/bin/env python3
import unittest
def summ(num1, num2) :
    '''Function : Sum of two numbers'''
    return num1 + num2
class TestSum(unittest.TestCase) :
    def testSumOfIntegers(self):
        self.assertEqual(summ(7, 6), 13, "Sum of 7 and 6 is equal 14")
    def testSumOfFloats(self) :
        self.assertEqual(summ(7.1, 21.3), 28.4, "Sum of 7.1 and 21.3 is equal 28.4")
    def testSumOfStrings(self) :
        self.assertEqual(summ('Galust_', 'Sahakyan'), 'Galust_Sahakyan', "Sum of strings 'Galust_' and 'Sahakyan' is equal 'Galust_Sahakuan'")
    def testSumOfNegativs(self):
        self.assertEqual(summ(-7, -81), -88, "Sum of -7 and -81 is equal -88")
    def testSumOfLongs(self):
        self.assertEqual(summ(777777777777777, -333333333333333), 444444444444444, "Sum of -777777777777777 and -333333333333333 is equal 444444444444444")

if __name__ == '__main__' :
    unittest.main() 
