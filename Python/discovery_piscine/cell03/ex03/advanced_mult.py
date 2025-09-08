#!/usr/bin/env python3

import sys

def main():
    if len(sys.argv) > 1:
        print("none")
        return
    outer_index = 0
    while outer_index <= 10:
        print(f"Table de {outer_index}: ", end="")
        inner_index = 0
        while inner_index <= 10:
            mult_result = inner_index * outer_index
            print(f"{mult_result} ", end="")
            inner_index += 1
        print("")
        outer_index += 1

if __name__ == "__main__":
    main()