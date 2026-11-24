# Simple slot machine
import random

def spin_row():
    symbols = ["🍒", "🍉", "🍋", "🔔", "⭐"]
    return [random.choice(symbols) for _ in range(3)]
def print_row(row):
    print(" | ".join(row))
def get_payout(row, bet):
    if row[0] == row[1] == row[2]:
        if row[0] == "🍒":
            return bet * 3
        elif row[0] == "🍉":
            return bet * 4
        elif row[0] == "🍋":
            return bet * 5
        elif row[0] == "🔔":
            return bet * 10
        elif row[0] == "⭐":
            return bet * 20
    return 0

def main():
    balance = 100
    print("--------------------------------------------------")
    print("               WELCOME TO THE SLOTS               ")
    print("             Symbols: 🍒 🍉 🍋 🔔 ⭐             ")
    print("--------------------------------------------------")

    while balance > 0:
        print(f"Current balance = ${balance:.2f}")
        bet = input(f"Enter your bet: $")
        print("--------------------------------------------------")
        if not bet.isdigit():
            print("Bet not a positive integer - try again")
            print("--------------------------------------------------")
            continue
        bet = int(bet)

        if bet > balance:
            print("Insufficient funds - try again")
            print("--------------------------------------------------")
            continue
        if bet <= 0:
            print("Bet must be greater than 0 - try again")
            print("--------------------------------------------------")
            continue

        balance -= bet
        print("Spinning....")
        row = spin_row()
        print_row(row)
        print("--------------------------------------------------")

        payout = get_payout(row, bet)
        if payout > 0:
            print("Payout successful!")
            print(f"You won ${payout}!")
        else:
            print("Payout unsuccessful!")
        print("--------------------------------------------------")

        play_again = input("Enter 'Y' to play again (other inputs mean program termination): ").upper()
        if play_again != "Y":
            break
        elif play_again == "Y":
            print("--------------------------------------------------")

    print("--------------------------------------------------")
    print(f"Game over!")
    print(f"You final balance is ${balance:.2f}!")
    print("--------------------------------------------------")

if __name__ == "__main__":
    main()