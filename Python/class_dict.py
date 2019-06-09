#!/usr/bin/python3

from collections import OrderedDict

class Dict:
	ordered=OrderedDict()
	def __setattr__(self,name,surname):
		object.__setattr__(self,name,surname)
		Dict.ordered['name']=name
		Dict.ordered['surname']=surname
	
	def __init__(self,name=None,surname=None):
		self.name=name
		self.surname=surname
		
	def __str__(self):
		return "This Class for dictionary"

c=Dict()

user_input=input("Write name,surname,age and proffesion seperated by commas (,): ")
name,surname,age,proff=user_input.split(",")
c.ordered['name']='Yervand','Anna',name
c.ordered['surname']='Hakobyan','Mkrtchyan',surname
c.ordered["age"]="25","30",age
c.ordered['proffesion']='IT',proff
print(dict(Dict.ordered))
print(Dict.ordered.keys())

