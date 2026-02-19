"""number = 600

if abs(number) < 10:     
    print(f"{number} is a single diget number")
elif abs(number) <100:
    print(f"{number} is a 2 digit number")
else:
    print(f"number too big")"""
name = input("what is your name: ").capitalize().strip()
boolean = True #False
if name =="Xavier" or name == "jake":
    print("I love your hair! How often do you dye it?")
    often = input("In months how often do you dye your hair:")
    if int(often) <3 :
        print ( "WOW that is relaly oftne!")
       
    print(f"Hello{name}!")