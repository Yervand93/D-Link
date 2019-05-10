#!/usr/bin/python3

patasxan="Kiev"
print("Vorn e Ukrainayi mayraqaxaq@")
pat1=len(patasxan)*"*"
pat_lriv=""
while pat1 != patasxan or pat_lriv != patasxan:
	pat=input("Grel mek tar: ")
	if not pat:
		print(pat1)
	elif pat in patasxan:
		ind=patasxan.find(pat)
		xnd=patasxan[ind]
		pat1=pat1[:ind]+xnd+pat1[ind+1:]
		print(pat1)
	else:
		print(pat1)
	if pat1==patasxan:
		print("Duq haxtel eq mer xax@!!!")
		break
	otvet=input("Ete giteq bar@ uzum eq lriv grel? y/n ")
	if otvet=="y":
		pat_lriv=input("Greq barn amboxjutyamb: ")
		if pat_lriv==patasxan:
			print("Duq haxtel eq mer xax@!!!")
			break
