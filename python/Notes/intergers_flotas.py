price = float (input("What is the cost of the item: $"))

tax_rate= float(input("What is the tax percent in your state: %"))

tax_rate_decimal = tax_rate/100

total = round(price*(1 + tax_rate_decimal),2)
print(total)

"""apples = 27

friends = 4

print("each of my friends can have", int(apples)//friends, "and I will have" , int(apples)%friends, "left over.")"""
