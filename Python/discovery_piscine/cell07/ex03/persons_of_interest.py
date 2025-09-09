#!/usr/bin/env python3

def famous_births(dic_historical_figures):
    dic_sorted_view = sorted(dic_historical_figures.items(), key=lambda kv: (kv[1]["date_of_birth"], kv[1]["name"]))
    for figure, details in dic_sorted_view:
        print(f'{details["name"]} is a great scientist born in {details["date_of_birth"]}.')


women_scientists = {
    "ada": { 
        "name": "Ada Lovelace", 
        "date_of_birth": "1815" 
        },
    "cecilia": { 
        "name": "Cecila Payne", 
        "date_of_birth": "1900" 
        },
    "lise": { 
        "name": "Lise Meitner", 
        "date_of_birth": "1878" 
        },
    "marie": { 
        "name": "Marie Curie", 
        "date_of_birth": "1906" 
        },
    "grace": { 
        "name": "Grace Hopper", 
        "date_of_birth": "1906" 
        }
    }

famous_births(women_scientists)