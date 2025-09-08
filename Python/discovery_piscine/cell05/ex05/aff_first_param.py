#!/usr/bin/env python3
import sys

def main():
    if len(sys.argv) < 2:
        print("none")
        return (1)
    print(f"{sys.argv[1]}")
    return (0)

if __name__ == "__main__":
    main()
