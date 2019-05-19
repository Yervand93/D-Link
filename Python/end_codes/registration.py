#!/usr/bin/python3

#Write registration script
#We have dictionary,and end of registration our dictionary,we must be have a new user and password.

d={"yervand": "margar","serob": "1234","edgar": "ed78"}
user=input("Write your user name: ")

if user in d:
	print("Edpes user ka")
	password=input("Write your password: ")
	if password in d[user]==password:
		print("password@ chisht e")
	else:
		print("Password@ sxal e")
else:
	print("Edpes User chka")
	otvet=input("Du kuzes registracya exnis? y/n: ")
	if otvet=="y":
		user=input("Write new user name: ")
		password=input("Write your password: ")
		confirm=input("Write your password to confirm: ")
		while confirm!=password:
			print("Incorrect password to confirm")
			password=input("Write your password: ")
			confirm=input("Write your password to confirm: ")
		d[user]=password
print(d)	
	
