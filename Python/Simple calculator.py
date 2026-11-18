#Simple calculator
print("-----------------------------------------------------------------")
print("This is a simple arithmetic calculator.")
operator = input("Please enter your operator(+ - * /): ")
while operator != "+" and operator != "-" and operator != "*" and operator != "/":
    operator = input("Invalid operator - try again(+ - * /): ")

print("-----------------------------------------------------------------")
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
print("-----------------------------------------------------------------")

if operator == "+":
    print(f"{num1} + {num2} = {round((num1 + num2), 5)}")
elif operator == "-":
    print(f"{num1} - {num2} = {round((num1 - num2), 5)}")
elif operator == "*":
    print(f"{num1} * {num2} = {round((num1 * num2), 5)}")
elif operator == "/":
    print(f"{num1} / {num2} = {round((num1 / num2), 5)}")
print("----------------------------------------------------------------")