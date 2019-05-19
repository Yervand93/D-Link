#!/usr/bin/python3

from random import choice
from time import sleep

empty_global=""
board_num=[1,2,3,4,5,6,7,8,9]

def board():
		print("|",(board_num[0]),"|",(board_num[1]),"|",(board_num[2]),"|")
		print("-------------")
		print("|",(board_num[3]),"|",(board_num[4]),"|",(board_num[5]),"|")
		print("-------------")
		print("|",(board_num[6]),"|",(board_num[7]),"|",(board_num[8]),"|")
		print("-------------")
	
def playing(arg=empty_global):
	number=choice([num for num in board_num if isinstance(num,int)])
	if arg is empty_global:
		if (empty_global in board_num):
			b_np=board_num.index(empty_global)
			board_num[b_np]="X"
			board()
		else:
			print("You write number out in range 1-9 or your number is used.")
	elif (not arg) and (number in board_num):
		b_n=board_num.index(number)
		board_num[b_n]="O"
		board()
	else:
		print("You write number out in range 1-9 or your number is used.")
	print(board_num,"--------")

def win(board_num):
	win_comb=((0,1,2),(3,4,5),(6,7,8),(0,3,6),(1,4,7),(0,4,8),(2,5,8),(2,4,6))
	for mass in win_comb:
		if board_num[mass[0]]==board_num[mass[1]]==board_num[mass[2]]:
			return board_num[mass[0]]
	return False 

def main():
	print("Hello.This game is playing with 2 players,\nplayer 1 it's you and player 2 is computer.")
	sleep(0.5)
	name=input("Player1 write your name: ")
	board()
	Win = False
	while not Win:
		global empty_global
		players_in=input("{} write number 1-9: ".format(name))
		while not players_in.isdigit() or not 1<=int(players_in)<=9:
			players_in=input("{} write number 1-9: ".format(name))
		else:
			empty_global=int(players_in)	
			playing(empty_global)
			if win(board_num)=="X":
				print("Congratulations {}, you win!".format(name))
				Win=True
				break
			print("Now turn Computer")
			sleep(0.3)
			playing()
			if win(board_num)=="O":
				print("{} you lose the game!Computer is win".format(name))
				Win=True
				break		
	
if __name__=="__main__":
	main()

