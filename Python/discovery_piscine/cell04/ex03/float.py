#!/usr/bin/env python3
import sys
from decimal import Decimal, InvalidOperation

def main():
    string = input("Give me a number: ").strip()
    try:
        dec = Decimal(string)
        if not dec.is_finite():
            raise InvalidOperation
    except InvalidOperation:
        print("Error: Not a valid number.", file=sys.stderr)
        sys.exit(1)
    if dec % 1 == 0:
        print("This number is an integer.")
    else:
        print("This number is a decimal.")

if __name__ == "__main__":
    main()