#!/usr/bin/python3

import random

def passw_generate():
	print("Now I ask you,how do you want,that your password is difficult")
	length=input("How many characters you want? ")
	num='123456789'
	low='qwertyuiopasdfghjklzxcvbnm'
	upp='QWERTYUIOPASDFGHJKLZXCVBNM'
	sym="+-*/~!@#$%^&*""()_=[]{};'<>?,.|"
	xar=num+low+upp+sym
	ls=list(xar)
	random.shuffle(ls)
	passw="".join([random.choice(ls) for x in range(int(length))])
	print(passw)
passw_generate()
