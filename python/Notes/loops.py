import random
'''start = 0

while start <= 20:
    print(start)
    start +=2

import random

count = 1

goose = random.randint(1,10)

while count != goose:
    print("Duck")
    count +=1 
    
print("GOOSE!")'''

"""#while loop
number = random.randint(1,25)

while True:
    guess = int(input("Guess a number 1-25:"))

    if guess == number:
        print(f"Yes the number was {number}. You won!")
        break#break takes us out of the loop and only works in loops
    elif guess >25:
        print("Make sure it is 1 through 25. Please try again")
    elif guess < number:
        print("Guess higher!")
    else:
        print("Guess lower!")"""

#For loop
ages = [22, 23, 25, 28,34, 36, 39]

names = ["Alex", "Katie", "Andew", "Vienna", "Tia", "Treyson","Xavier", "jake"]

for name in names:
    print(f"hello {name}!")

for number in ages:
    print(f"Your {number} squares is {number**2}")

for i in range(20):
    print(F' It is the {i} iteration of thsi looop')