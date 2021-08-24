#Password Generator
#
# very basic, given a length and desired
# number of passwords, it spits out a new password
# by jumbling up chars from a string 

import random

print("Welcome to the password generator!")
tog = input("Special characters? Y/N ")
#spc = "!@#$%^&*()"

if tog == "Y":
    char = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()"
elif tog == "N":
    char = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"


numPass = input("How many passwords do you need? ")

numPass = int(numPass)

for p in range(numPass):

    length = input("How long should it be? ")

    length = int(length)

    password = ''

    for c in range(length):

        password += random.choice(char)
    print("Your new password is: " + password)

input()



