#!/usr/bin/python3

from random import randint
from time import sleep

empty_global=""
board_num=[1,2,3,4,5,6,7,8,9]
combinacya=[[0,1,2],[3,4,5],[6,7,8],[0,4,8],[0,3,6],[1,4,7]]
def board():
		print("|",(board_num[0]),"|",(board_num[1]),"|",(board_num[2]),"|")
		print("-------------")
		print("|",(board_num[3]),"|",(board_num[4]),"|",(board_num[5]),"|")
		print("-------------")
		print("|",(board_num[6]),"|",(board_num[7]),"|",(board_num[8]),"|")
		print("-------------")

#def player(number):
#	if number in board_num:
#		b_n=board_num.index(number)
#		board_num[b_n]="X"
#		board()
#		return
#	else:
#		print("You write number out in range 1-9 or your number is used.")
	
def playing(arg=empty_global):
	number=randint(1,9)
	if (number or empty_global) in board_num:
		b_n=board_num.index(number)
		if arg is empty_global:
			b_np=board_num.index(empty_global)
			board_num[b_np]="X"
			board()
			return
		else:
			board_num[b_n]="O"
			board()
			return
	else:
		print("You write number out in range 1-9 or your number is used.")
	


def gaming(name):
	while True:
		global empty_global
		players_in=input("{} write number 1-9: ".format(name))
		try:
			players_in=int(players_in)
		except ValueError:
			pass
		empty_global=players_in	
		playing(players_in)
		print("Now turn Computer")
		sleep(0.3)
		playing()


	


def main():
	name=input("Player1 write your name: ")
	board()
	gaming(name)



if __name__=="__main__":
	main()
