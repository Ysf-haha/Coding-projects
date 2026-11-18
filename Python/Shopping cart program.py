#Simple shopping cart program

items = []
prices = []
total = 0

print("-------------------------------------------------------------")
print("                Welcome to the Shopping Cart                 ")
print("-------------------------------------------------------------")

while True:
    item = input("Enter an item to buy (press 'q' to quit): ")
    if item.lower() == "q":
        break
    else:
        price = float(input(f"Enter the price of the {item}: $"))
        items.append(item)
        prices.append(price)
        print("-------------------------------------------------------------")

print("--------------------------YOUR CART--------------------------")

if len(items) == 0:
    print("No items in cart")
    print("-------------------------------------------------------------")
else:
    for item in items:
        print(item, end = " ")
    for price in prices:
        total += price
    print("\n-------------------------------------------------------------")
    print(f"Total cost = ${total}")
    print("-------------------------------------------------------------")