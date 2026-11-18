# Number guessing game
import random

lowest_num = 1
highest_num = 100
answer = random.randint(lowest_num, highest_num)
guesses = 0
is_running = True

print("-------------------------------------------------------")
print("----------PYTHON NUMBER GUESSING GAME (1-100)----------")
print("-------------------------------------------------------")

while is_running:
    guess = input(f"Select a number between {lowest_num} and {highest_num}: ")
    if guess.isdigit():
        guess = int(guess)
        guesses += 1
        if guess < lowest_num or guess > highest_num:
            print("Number out of range - try again")
            print("-------------------------------------------------------")
        elif guess < answer:
            print("Your guess is too low - try again")
            print("-------------------------------------------------------")
        elif guess > answer:
            print("Your guess is too high - try again")
            print("-------------------------------------------------------")
        else:
            print("-------------------------------------------------------")
            print(f"CORRECT! The number was {answer}")
            print(f"Number of guesses used = {guesses}")
            print("-------------------------------------------------------")
            is_running = False
    else:
        print("Invalid guess - try again")
        print("-------------------------------------------------------")