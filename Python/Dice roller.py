# Dice roll with ASCII representations
import random

dice_art = {
    1 : ("┌─────────┐",
         "│         │",
         "│    ●    │",
         "│         │",
         "└─────────┘"),
    2 : ("┌─────────┐",
         "│  ●      │",
         "│         │",
         "│      ●  │",
         "└─────────┘"),
    3 : ("┌─────────┐",
         "│  ●      │",
         "│    ●    │",
         "│      ●  │",
         "└─────────┘"),
    4 : ("┌─────────┐",
         "│  ●   ●  │",
         "│         │",
         "│  ●   ●  │",
         "└─────────┘"),
    5 : ("┌─────────┐",
         "│  ●   ●  │",
         "│    ●    │",
         "│  ●   ●  │",
         "└─────────┘"),
    6 : ("┌─────────┐",
         "│  ●   ●  │",
         "│  ●   ●  │",
         "│  ●   ●  │",
         "└─────────┘")
}

dice = []
total = 0

print("-----------------------DICE ROLL-----------------------")
num_of_dice = int(input("How many dice would you like to roll: "))
print("-------------------------------------------------------")

for i in range(num_of_dice):
    dice.append(random.randint(1,6))

for line in range(5):
    for die in dice:
        print(dice_art.get(die)[line], end = "")
    print()

for die in dice:
    total += die

print("-------------------------------------------------------")
print(f"Total score = {total}")
rolled_dice = "Dice rolled = "
for die in dice:
    rolled_dice += f"{die}, "
print(rolled_dice[:-2])
print("-------------------------------------------------------")