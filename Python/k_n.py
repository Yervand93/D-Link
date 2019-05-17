#!/usr/bin/python3

from random import randint
from time import sleep

board_num=[1,2,3,4,5,6,7,8,9]
combinacya=[[0,1,2],[3,4,5],[6,7,8],[0,4,8],[0,3,6],[1,4,7],]
def board():
		print("|",(board_num[0]),"|",(board_num[1]),"|",(board_num[2]),"|")
		print("-------------")
		print("|",(board_num[3]),"|",(board_num[4]),"|",(board_num[5]),"|")
		print("-------------")
		print("|",(board_num[6]),"|",(board_num[7]),"|",(board_num[8]),"|")
		print("-------------")

def player(number):
	if number in board_num:
		b_n=board_num.index(number)
		board_num[b_n]="X"
		board()
		return
	else:
		print("You write number out in range 1-9 or your number is used.")
	
def computer():
	number=randint(1,9)
	if number in board_num:
		b_n=board_num.index(number)
		board_num[b_n]="O"
		board()
		return
	else:
		print("You write number out in range 1-9 or your number is used.")
	


def gaming(name):
	while not sxal:
		p=input("{} write number 1-9: ".format(name))
		try:
			p=int(p)
		except ValueError:
			pass
		player(p)
		print("Now turn Computer")
		sleep(0.3)
		computer()


def win_game():
	


def main():
	name=input("Player1 write your name: ")
	board()
	gaming(name)



if __name__=="__main__":
	main()
