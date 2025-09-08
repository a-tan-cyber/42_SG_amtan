#!/usr/bin/env python3

number = int(input("Enter a number\n").strip())
for integer in range(0,10):
    result = number * integer
    print(f"{integer} x {number} = {result}")
