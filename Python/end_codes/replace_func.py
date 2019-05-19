#!/usr/bin/python3

def replace_yer(first,second):
	txt=("Save Elephants. Around 28,000 elephants die every year. A former soldier talks about poaching. She says that people call it ‘poaching’, but it is more like war. Somebody gives the poachers arms, and somebody transports the ivory.")
	txt=txt.split()
	for word in txt:
		if word==first:
			ind=txt.index(word)
			txt.remove(word)
			txt.insert(ind,second)
	print(" ".join(txt)) 
