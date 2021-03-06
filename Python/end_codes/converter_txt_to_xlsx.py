#!/usr/bin/python3
# Creating script,when you run script and near write -f file_name.txt -x excel_name.xlsx,then it is convert txt file to xlsx file.
# Txt file is must be data about of employers.
# When he finding in txt file employers proffession and age is great then 30,then this row is coloring to red.



import re
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
	workbook=xlsxwriter.Workbook(b)
	worksheet=workbook.add_worksheet()
	data=open(a)

	linelist=data.readlines()
	col_yellow=workbook.add_format({'bg_color': '#FFFF00'})
	col_red=workbook.add_format({'bg_color': '#FF0000'})
	count=0
	for i in range(0,len(linelist)):
		line=linelist[i]
		splitline=line.split()
		worksheet.write_row(i,0,splitline)
		worksheet.conditional_format('A1',{'type':'cell','criteria': 'equal to','value': '"N"' ,'format':col_yellow})
		for j in splitline:
			s=" ".join(filter(None,splitline))
			res=re.findall(r'\d{2}',s)
			res2=' '.join(map(str,res))
			if res2=="":
				continue
			if int(res2)>=30 and j=='IT':
				worksheet.set_row(count,cell_format=col_red)
		count+=1
	workbook.close()

def main():
	parser=createParser()
	namespace=parser.parse_args(sys.argv[1:])
	f=namespace.file_value.name
	x=namespace.xlsx_value.name
	if f[-3:]=="txt" and path.exists(f):
		txt_file(f,x)
	else:
		print("Edpisi fayl chka")

try:
	if __name__=='__main__':
		main()
except:
	print("Please near filename write -h or --help")

