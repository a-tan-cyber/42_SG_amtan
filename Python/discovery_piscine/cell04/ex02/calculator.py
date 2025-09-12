#!/usr/bin/env python3
import sys

try:
    first_number = int(input("Give me the first number: "))
except ValueError:
    print("Error: First number must be an integer", file=sys.stderr)
    sys.exit(1)
try:
    second_number = int(input("Give me the second number: "))
except ValueError:
    print("Error: Second number must be an integer", file=sys.stderr)
    sys.exit(2)
print("Thank you!")
print(f"{first_number} + {second_number} = {first_number + second_number}")
print(f"{first_number} - {second_number} = {first_number - second_number}")
division_result = first_number / second_number
# print(f"{first_number} / {second_number} = {int(division_result) if division_result.is_integer() else division_result}")
print(f"{first_number} / {second_number} = {division_result:.{3}f}")
print(f"{first_number} * {second_number} = {first_number * second_number}")