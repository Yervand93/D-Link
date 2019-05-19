#!/usr/bin/python3

#Cows And Bulls
#Create a program that will play the “cows and bulls” game with the user. The game works like this: Randomly generate a 4-digit number. Ask the user to guess a 4-digit number. For every digit that the user guessed correctly in the correct place, they have a “cow”. For every digit the user guessed correctly in the wrong place is a “bull.” Every time the user makes a guess, tell them how many “cows” and “bulls” they have. Once the user guesses the correct number, the game is over. Keep track of the number of guesses the user makes throughout the game and tell the user at the end.

txt="2836"
while True:
	cows=0
	bulls=0
	inp=input("Write 4 numbers: ")
	if not inp.isdigit():
		print("You need write only integers")
	if inp==txt:
		print("You win")
		break
	if len(inp)==4:
		for i in inp:
			if i in txt:
				ind=txt.index(i)
				if inp[ind]==txt[ind]:
					cows+=1
				else:
					bulls+=1
			else:
				continue
	else:
		print("Write only 4 numbers")	
	print("cows=",cows,"bulls=",bulls)
