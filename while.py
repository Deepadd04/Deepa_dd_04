number = int(input())
guess = eval(input("enter your guess:"))
while guess != number:
   if guess == number:
     print("yes,the num is", number)
   elif guess > number:
     print("guess is high")
   else:
     print("guess is low")
     
