# Weight conversion program
print("------------------------------------------------------")
print("This is a weight conversion program (kg ↔ lbs)")
print("------------------------------------------------------")

print("Select your conversion: ")
print("1: Kg → lbs")
print("2: lbs → kg")
choice = input("Your choice (1 or 2): ")
print("------------------------------------------------------")
while choice != "1" and choice != "2":
    choice = input("Invalid choice - try again (1 or 2): ")

if choice == "1":
    print("------------------------------------------------------")
    weight = float(input("Enter your weight(kg): "))
    print(f"{weight} kg = {round((weight * 2.205), 4)} lbs")
elif choice == "2":
    print("------------------------------------------------------")
    weight = float(input("Enter your weight(lbs): "))
    print(f"{weight} lbs = {round((weight / 2.205), 4)} kg")
print("------------------------------------------------------")

