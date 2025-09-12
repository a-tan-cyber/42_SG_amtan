#!/usr/bin/env python3
import sys

def main():
    try:
        x = float(input("Give me a number: ").strip())
    except ValueError:
        print("Error: Not a valid number.", file=sys.stderr)
        sys.exit(1)
    if x.is_integer():
        print("This number is an integer.")
    else:
        print("This number is a decimal.")

if __name__ == "__main__":
    main()