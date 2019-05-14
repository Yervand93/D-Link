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
		#pass
	
	def __str__(self):
		return "This Class for dictionary"

c=Dict()
c.ordered['name']='Yervand','Anna'
c.ordered['surname']='Hakobyan','Mkrtchyan'
c.ordered["Age"]="25","30"
c.ordered['']='Harutyunyan'
print(dict(Dict.ordered))
print(Dict.ordered.keys())

