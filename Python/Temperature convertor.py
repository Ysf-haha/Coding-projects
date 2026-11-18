# Temperature convertor program
print("------------------------------------------------------")
print("This is a simple temperature conversion program (℃ ↔ ℉")
print("------------------------------------------------------")

print("Select your conversion: ")
print("1: ℃ → ℉")
print("2: ℉ → ℃")
choice = input("Your choice (1 or 2): ")
print("------------------------------------------------------")
while choice != "1" and choice != "2":
    choice = input("Invalid choice - try again (1 or 2): ")

if choice == "1":
    print("------------------------------------------------------")
    temperature = float(input("Enter your temperature(℃): "))
    print(f"{temperature} ℃ = {round(((temperature * 1.8) + 32), 4)} ℉")
elif choice == "2":
    print("------------------------------------------------------")
    temperature = float(input("Enter your temperature(℉): "))
    print(f"{temperature} ℉ = {round((temperature - 32) * (5/9), 4)} ℃")
print("------------------------------------------------------")