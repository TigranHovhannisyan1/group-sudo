#!/usr/bin/env python3

list = [(i, j, k) for i in range(1,30) for j in range(i,30) for k in range(j,30) if i * i + j *j == k * k] 
print(list)

