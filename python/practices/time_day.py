# CM, time of day python

time = int(input("What is the time in military time: "))

if time < 6:
    print(f"Why are you up its {time}, go to sleep!")
elif time < 12:
    print("Good morning!")
elif time <20:
    print("Good afternoon!")
elif time >20:
   print("You should get some sleep. Good night!")