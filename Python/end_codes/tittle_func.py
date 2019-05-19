#!/usr/bin/python3

def tittle_yer():
	txt=input("Write your text for do all first characters uppercase:\n")
	txt=txt.split()
	txt1=[i[0].upper()+i[1:] for i in txt]
	print(*txt1) 
