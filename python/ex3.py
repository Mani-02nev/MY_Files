import random
user_choice=int(input(" choose your choice 0 is a rock ,1 is a paper, 2 is a scissor.\n"))
computer_choice=random.randint(0,2)
rock=str("""
    ROCK     
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
""")
2
Paper=str("""
    PAPER      
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
""")

scissor=str("""
    SCISSOR
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
""")
print("===========game start===========\n"+ "your_choice is\t",user_choice)
if user_choice==0:
     print(rock)
elif user_choice==1:
     print(Paper)
elif user_choice==2:
     print(scissor)
print(f"computer_choice is  {computer_choice}")     
if computer_choice==0:
     print(rock)
elif computer_choice ==1:
     print(Paper)        
elif computer_choice==2:
     print(scissor)                

if user_choice==1 and computer_choice==0 :
    print("win")
elif user_choice==computer_choice :
    print("Match draw")  
elif user_choice==0 and computer_choice==1:
     print("Your Lose the match")
elif computer_choice==1 and user_choice==2:
      print("Your Win the match")
elif computer_choice==2 and user_choice==1:
    print("Your Lose the match")
elif computer_choice==2 and user_choice==0:
    print("Your Win the match")
elif computer_choice==0 and user_choice==2:
     print("Your Lose the match")

else:
     
     print("your typed an invalid number")     