#!/usr/bin/python3

obshi=[1,2,3,4,5,6,7,8,9]

def repeat():
	print(obshi[:3],obshi[3:6],obshi[6:])

repeat()
while True:
	pat=int(input("Grel tiv"))
	if pat==pat.isalpha():
		print("Petq e tiv grel")
		continue
	else:
		if 1<=pat<=9:
			if str(obshi[pat-1])not in "XO":
				obshi[pat-1]='X'
			elif str(obshi[pat-1])not in "XO":
				obshi[pat-1]='O'
			else:
				print("Zbaxvac e")
		else:
			print("sxal e grvac")
print(obshi) 
