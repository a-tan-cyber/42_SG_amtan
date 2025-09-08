#!/usr/bin/env python3
import sys

def main():
    if len(sys.argv) != 2:
        print("none")
        return
    input_string = input("What was the parameter? ")
    if input_string == sys.argv[1]:
        print("Good job!")
    else:
        print("Nope, sorry...")


if __name__ == "__main__":
    main()