#!/usr/bin/python3

obshi=[[1,2,3],[4,5,6],[7,8,9]]
krestik=[]
nolik=[]
p= [[1,2,3],[1,4,7],[1,5,9],[2,5,8],[3,5,7],[3,6,9],[4,5,6],[7,8,9]]

def repeat():
	for i in obshi:
		print(i[0],i[1],i[2])

def krest(a):
	for i in obshi:
		print(i)
		for j in range(len(i)):
			print(j)
			if a==i[j]:
				if i[j] != "X" and i[j] != "O":
					krestik.append(i[j])
					i[j]="X"
					print(krestik)
			elif i[j]=="O":
				print("Zanit e")
				krest(a)
	repeat()

def nol(b):
	for i in obshi:
		for j in range(len(i)):
			if b==i[j]:
				if i[j] != "O" and i[j] != "X":
					nolik.append(i[j])
					i[j]="O"
					print(nolik)
				else:
					return "Zanit e"
	repeat()

repeat()
while True:
	print("Move X")
	a=input("Write your number what you want: ")
	try:
		a=int(a) 
		if a >= 1 and a <=9:
			krest(a)
	except:
		print("Greq miayn tver 1-9")
		repeat()
		continue
	krestik.sort()
	if krestik in p:
		print("The X gamer is Win!")
		break
	print("Move O")
	b=input("Write your number what you want: ")
	try:
		b=int(b)
		if b>=1 and b<=9:
			nol(b)
	except:
		print("Greq miayn tver 1-9")
		repeat()
		continue
	nolik.sort()
	if nolik in p:
		print("The O gamer is Win!")
		break
