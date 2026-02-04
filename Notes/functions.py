admin = "ms. laRose"
def hello():
    print(f"Hello {admin}!")
def hello_user(name):
    print(f"Hello {name}!")

def area(lenght,widht):
    return lenght * widht

side_one = 12
side_two = 8

print(f"The area of a recatangle with a side of {side_one} and {side_two} is {area(side_one, side_two)}")
print(f"The area of a recatangle with a side of {side_one} and {side_two} is {area(4, 3)}")
hello()
hello_user("KAtie")
hello_user("Treyon")
hello_user(input("Tell me a name: "))


def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x
    return total
    
print(f"the factorial of 5 is {factorial(5)}")
print(f"The factorial of 3 is {factorial(3)}")
print(f"The factorial of 10 is {factorial(10)}")
