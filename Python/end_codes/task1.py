#!/usr/bin/python3

#Write a program (using functions!) that asks the user for a long string containing multiple words. Print back to the user the same string, except with the words in backwards order.

txt=input("Write text,what you need for reverse it: ")

rev=txt.split()
rev.reverse()
end=" ".join(rev)
print(end)

