#!/usr/bin/python3

print("Have in your head a number between 0 and 100,and I will guess that number.Use too high, too low, or correct")
def task():
 max_n = 100
 min_n = 1
 while True:
    current = (max_n+min_n)//2
    tiv = input('Is your number is {}: '.format(current))
    if tiv=='correct':
        return print('I find your number!  '+ str(current))
    elif tiv=='too high':
        min_n = current + 1
    else:
        max_n = current - 1 
task()
