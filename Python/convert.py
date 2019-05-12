#!/usr/bin/python3
# -*- coding: utf-8 -*-

from os import path
import sys
import argparse
import xlsxwriter

def createParser():
	parser=argparse.ArgumentParser()
	parser.add_argument('-f','--file',dest='file_value',type=argparse.FileType(),help="Read file is txt")
	parser.add_argument('-x','--xlsx',dest='xlsx_value',type=argparse.FileType('w'),help="Write txt file to xlsx")	
	return parser

def txt_file(a,b):
	r=open(a,"r")
	w=open(b,"w")
	if b[-4:]=="xlsx":	
		writing=w.write(r.read())
		r.close()
		#work=openpyxl.load_workbook(b)
		#all_name=theFile.sheetnames
		#print(all_name)
		print("Your -xlsx- file is done")
	else:
		print("The file what you are write is not -xlsx- file")
	x=xlsxwriter.Workbook(b)
		


#def xlsx_work(work):
	#w=xlswriter.Workbook(work)
	




def main():
	parser=createParser()
	namespace=parser.parse_args(sys.argv[1:])
	f=namespace.file_value.name
	x=namespace.xlsx_value.name
	if f[-3:]=="txt" and path.exists(f):
		txt_file(f,x)
	else:
		print("Edpisi fayl chka")
#	print("-------- = {}".format(namespace.file_value.name))




if __name__=='__main__':
	main()
