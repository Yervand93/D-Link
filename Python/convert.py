#!/usr/bin/python3

from os import path
import sys
import argparse

def createParser():
	parser=argparse.ArgumentParser()
	parser.add_argument('-f','--file',dest='file_value',type=argparse.FileType(),help="Read file is txt")
	parser.add_argument('-x','--xlsx',dest='xlsx_value',type=argparse.FileType(),help="Write txt file to xlsx")	
	return parser

def txt_file(x):
	r=open(x)
	s=r.read()
	print(s)	
	









def main():
	parser=createParser()
	namespace=parser.parse_args(sys.argv[1:])
	f=namespace.file_value.name
	#x=namespace.xlsx_value.name
	if f[-3:]=="txt" and path.exists(f):
		txt_file(f)
	else:
		print("Edpisi fayl chka")
	print("-------- = {}".format(namespace.file_value.name))
	#text=namespace.file.read()
	#print(text)
#	with open('text')





if __name__=='__main__':
	main()
