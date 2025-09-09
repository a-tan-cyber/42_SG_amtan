#!/usr/bin/env python3
import sys

def main():
    if len(sys.argv) != 3:
        print("none")
        return (1)
    limit_1 = int(sys.argv[1])
    limit_2 = int(sys.argv[2])
    arr =[x for x in (range(limit_1, limit_2 + 1) if limit_1 <= limit_2 else range(limit_2, limit_1 + 1))]
    print(arr)


if __name__ == "__main__":
    main()