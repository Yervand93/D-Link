#!/usr/bin/python3

obshi=[[1,2,3],[4,5,6],[7,8,9]]
krestik=[]
nolik=[]
p= [[1,2,3],[1,4,7],[1,5,9],[2,5,8],[3,5,7],[3,6,9],[4,5,6,],[7,8,9]]

def repeat():
	for i in obshi:
		print(i[0],i[1],i[2])

	
repeat()
while True:
	print("Move X")
	a=int(input("Write your number what you want: "))
	print("Move O")
	b=int(input("Write your number what you want: "))
	for i in obshi:
		for j in range(len(i)):
			if a==i[j]:
				krestik.append(i[j])
				i[j] = "X"
			if b==i[j]:
				nolik.append(i[j])
				i[j]="O"
	krestik.sort()
	nolik.sort()
	if krestik in p:
		print("The X gamer is Win!")
		break
	if nolik in p:
		print("The O gamer is Win!")
		break
	repeat()
