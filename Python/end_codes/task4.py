#!/usr/bin/python3

#Password Generator
#Write a password generator. Be creative with how you generate passwords - strong passwords have a mix of lowercase letters, uppercase letters, numbers, and symbols. The passwords should be random, generating a new password every time the user asks for a new password. Ask the user how strong they want their password to be.

import string
import random

def passw_generate():
	print("Now I ask you,how do you want,that your password is difficult")
	num=string.digits
	low=string.ascii_lowercase
	upp=string.ascii_uppercase
	sym=string.punctuation
	xar=num+low+upp+sym
	ls=list(xar)
	random.shuffle(ls)
	while True:
		try:
			length=input("How many characters you want? ")
			passw="".join([random.choice(ls) for x in range(int(length))])
			print("Your password is: {}".format(passw))
			break
		except:
			print("Write only integers")
		
passw_generate()
