#!/usr/bin/env python3
import sys

def main():
    argc = len(sys.argv)
    if argc < 2:
        print("none")
        return (1)
    for index in range(1, argc):
        print(downcase_it(sys.argv[index]))


def downcase_it(string_input):
    return (string_input.lower())


if __name__ == "__main__":
    main()