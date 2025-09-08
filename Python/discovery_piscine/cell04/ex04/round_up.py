#!/usr/bin/env python3
import sys
from decimal import Decimal, InvalidOperation, ROUND_CEILING

def main():
    string = input("Give me a number: ").strip()
    try:
        dec = Decimal(string)
        if not dec.is_finite():
            raise InvalidOperation
    except InvalidOperation:
        print("Error: Not a valid number.", file=sys.stderr)
        sys.exit(1)
    print(dec.to_integral_value(rounding=ROUND_CEILING))


if __name__ == "__main__":
    main()