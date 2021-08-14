#!/usr/bin/python2 -u
import random

states = open("./state_names.txt").readlines()
state = random.choice(states).rstrip()
year = 2020

print("What year was Freckles born?")
res = None
while not res:
    try:
        res = input("Year? ")
        print("You said: {}".format(res))
    except:
        res = None

if res != year:
    print("Okay...")
else:
    print("You passed!")

print("What's the best state to visit?")
res = None
while not res:
    try:
        res = input("State? ")
        print("You said: {}".format(res))
    except:
        res = None

if res == state:
    print("I agree!")
    flag = open("./flag").read()
    print(flag)
else:
    print("Thanks for your input!")

