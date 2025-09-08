#!/usr/bin/env python3
import sys
import re

def main():
    if len(sys.argv) != 3:
        print("none")
        return
    keyword = sys.argv[1]
    string = sys.argv[2]
    pattern = rf"(?=({re.escape(keyword)}))"
    matches = re.findall(pattern, string)
    print(len(matches))


if __name__ == "__main__":
    main()
