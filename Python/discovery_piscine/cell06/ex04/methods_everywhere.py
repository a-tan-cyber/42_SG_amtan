#!/usr/bin/env python3
import sys

def main():
    argc = len(sys.argv)
    if argc < 2:
        print("none")
        return (1)
    for index in range(1, argc):
        arg = sys.argv[index]
        if len(arg) > 8:
            arg = shrink(arg)
        elif len(arg) < 8:
            arg = enlarge(arg)
        print(arg)


def shrink(arg):
    return (arg[:8])


def enlarge(arg):
    return (arg + 'Z' * (8 - len(arg)))


if __name__ == "__main__":
    main()
