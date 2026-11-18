# Compound interest calculation program

print("------------------------------------------------------")
print("This is a compound interest calculator")
print("------------------------------------------------------")

principle = 0
rate = 0
time = 0

while principle <= 0:
    principle = float(input("Enter the principle amount: "))
    if principle <= 0:
        print("The principle amount must be greater than 0")
        print("------------------------------------------------------")

while rate <= 0:
    rate = float(input("Enter the interest rate: "))
    if rate <= 0:
        print("The interest rate must be greater than 0")
        print("------------------------------------------------------")

while time <= 0:
    time = int(input("Enter the time (in years): "))
    if time <= 0:
        print("The time(years) must be greater than 0")
        print("------------------------------------------------------")

    print("------------------------------------------------------")

result = principle * pow((1 + (rate / 100)), time)
print(f"Final amount after {time} years = {result:.2f}")
print("------------------------------------------------------")