#!/usr/bin/env python3

first_number = float(input("Enter the first number:\n").strip())
second_number = float(input("Enter the second number:\n").strip())
result = first_number * second_number
if result == 0:
    sign_message = "The result is positive and negative."
elif result < 0:
    sign_message = "The result is negative."
else:
    sign_message = "The result is positive."

print(f"{int(first_number)} x {int(second_number)} = {int(result)}")
print(sign_message)

