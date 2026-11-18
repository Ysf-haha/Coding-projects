# Rock, paper, scissors game vs. computer
import random

options = ("Rock", "Paper", "Scissors")
running = True

print("---------------ROCK PAPER SCISSORS---------------")
while running:
    player = None
    computer = random.choice(options)
    while player not in options:
        player = input("Enter your choice (rock/paper/scissors): ").capitalize()
        if player not in options:
            print("Not a valid option")
            print("-------------------------------------------------")

    print("-------------------------------------------------")
    print(f"Your choice: {player}")
    print(f"Computer choice: {computer}")
    print("-------------------------------------------------")

    if player == computer:
        print("Draw!")
    elif player == "Rock" and computer == "Paper":
        print("You lose!")
    elif player == "Paper" and computer == "Scissors":
        print("You lose!")
    elif player == "Scissors" and computer == "Rock":
        print("You lose!")
    else:
        print("You win!")
    print("-------------------------------------------------")

    choice = input("Do you want to play again (Y/N): ").capitalize()
    while choice != "Y" and choice != "N":
        choice = input("Invalid choice - try again (Y/N): ").capitalize()
    if choice == "N":
        running = False
    print("-------------------------------------------------")