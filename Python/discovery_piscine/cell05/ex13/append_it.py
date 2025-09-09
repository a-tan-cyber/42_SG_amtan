#!/usr/bin/env python3
import sys

def main():
    argc = len(sys.argv)
    if argc < 2:
        print("none")
        return (1)
    for index in range(1, argc):
        arg = sys.argv[index]
        if len(arg) > 3 and arg[-3] == 'i' and arg[-2] == "s" and arg[-1] == "m":
            continue
        print(arg + "ism")


if __name__ == "__main__":
    main()