# Simple banking program

def show_balance(balance):
    print(f"Current balance = ${balance:.2f}")

def deposit():
    amount = float(input("Enter amount to deposit: "))
    while amount < 0:
        amount = float(input("Invalid amount - try again (must be 0 or greater): "))
    return amount

def withdraw(balance):
    amount = float(input("Enter amount to withdraw: "))
    while amount < 0:
        amount = float(input("Invalid amount - try again (must be 0 or greater): "))
    while amount > balance:
        print("-------------------------------------------------------")
        print(f"Not enough funds - your balance is ${balance:.2f}")
        amount = float(input("Try again (must be less than balance): "))
    return amount

def main():
    balance = 0
    running = True
    print("-------------------------------------------------------")
    print("--------------------BANKING PROGRAM--------------------")
    print("-------------------------------------------------------")
    while running:
        print("Select one of the following options:")
        print("1. Show balance")
        print("2. Deposit")
        print("3. Withdraw")
        print("4. Exit")
        print("-------------------------------------------------------")
        choice = input("Enter your choice (1 - 4): ")
        while choice < "1" or choice > "4":
            choice = input("Invalid input - try again (1 - 4): ")
        print("-------------------------------------------------------")
        if choice == "1":
            show_balance(balance)
            print("-------------------------------------------------------")
        elif choice == "2":
            balance += deposit()
            print("-------------------------------------------------------")
            print("Amount deposited")
            print(f"New balance = ${balance:.2f}")
            print("-------------------------------------------------------")
        elif choice == "3":
            balance -= withdraw(balance)
            print("-------------------------------------------------------")
            print("Amount withdrawn")
            print(f"New balance = ${balance:.2f}")
            print("-------------------------------------------------------")
        else:
            print("Program terminated")
            print("-------------------------------------------------------")
            running = False

if __name__ == "__main__":
    main()