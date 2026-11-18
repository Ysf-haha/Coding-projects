#Simple quiz game

questions = ("Q1: What is the population of the world?",
             "Q2: What percentage of the Earth is water?",
             "Q3: What is the greatest piece of fiction?",
             "Q4: Who solos fiction?")

options = (("A. 7.5 billion", "B. 9.01 billion", "C. 8 billion", "D. 8.3 billion"),
           ("A. 78%", "B. 83%", "C. 81%", "D. 71%"),
           ("A. Code Geass", "B. Re;zero", "C. One piece", "D. Neon Genesis Evangelion"),
           ("A. Goku", "B. Subaru", "C. Eren", "D. Lelouch"))

answers = ("D", "C", "A", "D")
guesses = []
score = 0
question_num = 0

print("---------------------------------------------")
print("           Welcome to the Quiz!              ")
print("---------------------------------------------")
for question in questions:
    print(questions[question_num])
    for option in options[question_num]:
        print(option)
    guess = input("Your choice (A/B/C/D): ").upper()
    guesses.append(guess)
    while guess != "A" and guess != "B" and guess != "C" and guess != "D":
        print("Invalid choice - try again")
        guess = input("Your choice (A/B/C/D): ").upper()
    if guess == answers[question_num]:
        print(f"CORRECT! - +1 score")
        score += 1
    else:
        print(f"INCORRECT! - Correct answer = {answers[question_num]}")
    question_num += 1
    print("---------------------------------------------")

print("                 GAME OVER!                ")
print("---------------------------------------------")
print("Correct answers:", end = " ")
for answer in answers:
    print(answer, end = " ")
print()
print("Your guesses:", end = " ")
for guess in guesses:
    print(guess, end = " ")
print()
print(f"Total score = {score}/4")
print("---------------------------------------------")