#!/usr/bin/env python3
import sys

def main():
    if len(sys.argv) < 3:
        print("none")
        return
    for index in range(-1, -len(sys.argv), -1):
        print(f"{sys.argv[index]}")


if __name__ == "__main__":
    main()