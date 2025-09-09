#!/usr/bin/env python3

def array_of_names(dic):
    return ([first_name.capitalize() + " " + last_name.capitalize() for first_name, last_name in dic.items()])


persons = {
    "jean": "valjean",
    "grace": "hopper",
    "xavier": "niel",
    "fifi": "brindacier"
}

print(array_of_names(persons))