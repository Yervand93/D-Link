#!/usr/bin/python3

obshi=[[1,2,3],[4,5,6],[7,8,9]]
krestik=[]
nolik=[]
a= [[1,2,3],[1,4,7]]
for i in obshi:
	print(i[0],i[1],i[2])
while True:
	print("Move X")
	a=int(input("Write your number what you want: "))
	print("Move O")
	b=int(input("Write your number what you wnat: "))	
	for i in obshi:
		for j in range(len(i)):
			if a==i[j]:
				i[j] = "X"
				print(obshi)
		#if a in i:
		#	ind=i.index(a)
		#	obshi[2][ind]="X"
		#	krestik.append(a)
		#	print(obshi)
		#	print(krestik)
	for i in obshi:
		print(i[0],i[1],i[2])

