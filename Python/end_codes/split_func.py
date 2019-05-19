#!/usr/bin/python3

line=input()
def mySplit (line,delim=" ") :
	tmp=""
	ml=[]
	for i in line:
		if i!=delim:
			tmp+=i
		else:
			ml.append(tmp)
			tmp=""
	ml.append(tmp)
	return ml

print(mySplit(line)) 
