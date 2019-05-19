#!/usr/bin/python3


def lower_yer():
	txt=input("Write your text for do all characters uppercase:\n")
	txt1=""
	for i in txt:
		if  ord("A")<=ord(i)<=ord("Z"):
			txt1+=chr(ord(i)+32)
		else:
			txt1+=chr(ord(i))
	print(txt1) 
