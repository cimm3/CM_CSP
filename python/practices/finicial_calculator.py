# CM, finicial calculator python

monthly_income = float (input( "How much money you earn monthly:$ " ))

rent = float (input( "how much is your rent:$ "))

print("You spent $", rent, "which is", round((rent/monthly_income) * 100), "% of you icome.") 

monthly_utilities = float (input ( "How much money do you spend on utilities: $ "))

print("that is a totola of $", monthly_utilities, " which is", round((monthly_utilities/monthly_income)*100), "% of your income.")

groceries = float (input ("How much are usually your monthly groceries:$ "))

print( "You spent", groceries, "that is", round((groceries/monthly_income)*100), "% of your income.")

transportation = float (input ( "How much do you spend on transprtation monthly: $ "))

print("You spent", transportation, "that is", round((transportation/monthly_income)*100), "% of your income.")

save = (monthly_income*0.1)

print("You should save",save, "which is 10% of your income.")

spending = (monthly_income- (rent+monthly_utilities+transportation+groceries+save))

print("You have a total of $", spending,"spending every month!")