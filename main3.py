#Simple guessing game
#This python coding done by Biswajit Aich
#Date:2023_12_30T15:53:00Z
#*************************************************************************
print ("IT'S A GUESSING GAME.. \nGuess the correct number to \"WIÑ\"\n...You will get 5 chances...")
n = 23
z = 5
t = 1
print("\nGUESS THE NUMBER\nHint:number is between 1 to 30\n")
while True:
      x=int(input("\n\nEnter number: \n"))
      if t==z:
             print ("sorry there is no more chance")
             break
      elif x==n:
             print ("CONGRATULATIONS\nYour guess is correct\nWISH YOU: \"HAPPY NEW YEAR\"")
             break
      elif x<=10 and x>=0 :
             print ("Your guess is way off")
             t+=1
             continue
      elif x<=15 and x>10:
             print ("Your guess is slightly way off")
             t+=1
             continue
      elif x<21 and x>15:
             print ("Your guess is close...")
             t+=1
             continue
      elif x>=21 and x<=22:
             print ("Your guess too close...")
             t+=1
             continue
      elif x<=25 and x >= 24:
             print ("Your guess too close...")
             t+=1
             continue
      elif x>=26 and x<=30:
             print ("Your guess is close...")
             t+=1
             continue
      else :
            print ("please enter number between 1 to 30")
            t+=1
            continue
print("Thanks for playing")
