import random
A = [1, 2, 3]
#x=random.choice(A)
print("Chose 1 for ROCK\n\t 2 for PAPER\n\t 3 for SCISSOR\n") 
a = 0
b = 0
c = 0
while a < 3:
    x=random.choice(A)
    z = int(input("Choose (1, 2, or 3): "))
    try:
        if z == x:
            print("Computer chose the same\n")
            print("It's a tie\n")
            a += 1
        elif z == 1 and x == 2:
            print("Computer chose: paper\n")
            print("You lose\n")
            a += 1
            b +=1
        elif z == 1 and x == 3:
            print("Computer chose: scissors\n")
            print("You win\n")
            a += 1
            c += 1
        elif z == 2 and x == 1:
            print("Computer chose: rock\n")
            print("You win\n")
            a += 1
            c += 1
        elif z == 2 and x == 3:
            print("Computer chose: scissors\n")
            print("You lose\n")
            a += 1
            b += 1
        elif z == 3 and x == 1:
            print("Computer chose: rock\n")
            print("You lose\n")
            a += 1
            b += 1
        elif z==3 and x==2:
            print("Computer chose: paper\n") 
            print("You win\n")
            a += 1
            c += 1 
        else :
            raise invalid("INVALID")
    except invalid as e:
        print(e)
        continue
    #x=random.choice(A)
print("::::::::Score:::::::::")   
if b==c:
    print("DRAW\n")
elif b<c:
    print ("YOU ARE THE WINNER\n")
else:
    print("YOU LOST\n")

print("Thank you to play")
