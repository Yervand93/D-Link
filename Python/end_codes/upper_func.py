#!/usr/bin/python3

def upper_yer():
	txt=input("Write your text for do all characters uppercase:\n")
	txt1=""
	for i in txt:
		if ord(i)>=ord("a") and ord(i)<=ord("z"):
			txt1+=chr(ord(i)-32)
		else:
			txt1+=chr(ord(i))
	print(txt1) 
