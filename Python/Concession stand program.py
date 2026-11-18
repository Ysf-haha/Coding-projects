#Concession stand menu

menu = {"Salted popcorn" : 900,
        "Butter popcorn" : 1000,
        "Caramel popcorn" : 1150,
        "Soda" : 350,
        "Nachos" : 650,
        "Water" : 200,
        "French fries" : 450}

cart = []
total = 0
order = ""

print("----------------MENU-------------------")
for key, value in menu.items():
    print(f"{key:17}: PKR {value}/-")
print("---------------------------------------")

while True:
    item = input(f"Select an item ('Q' to quit): ").capitalize()
    if item == "Q":
        break
    elif menu.get(item) is not None:
        cart.append(item)
    elif menu.get(item) is None:
        print("Invalid item - try again")

print("------------------ORDER-----------------")
for item in cart:
    total += menu.get(item)
    order += (item + ", ")
order = order[0: len(order) - 2]
print(order)
print(f"Total cost = PKR {total}")
print("---------------------------------------")