#!/usr/bin/python3

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
