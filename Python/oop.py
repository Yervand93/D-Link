#!/usr/bin/python3

class Wheel:
	radius = 500

	def rotate(self):
		pass

class Car:
	MAX_SPEED = 200

	def __init__(self,speed=0,color=None):
		self.speed = speed
		self.color = color
		self.wheels = [Wheel(),Wheel(),Wheel(),Wheel()]

	def __str__(self):
		return "<Car color: "+ self.color+"; speed: " + str(self.speed) + ">"

	def increase_speed(self,delta):
		if self.speed + delta <self.MAX_SPEED:
			self.speed+=delta
		else:
			self.speed=self.MAX_SPEED

c=Car(50,"red")
c.wheels[0].rotate()
c.wheels[1].rotate()

def f(x):
	x.speed=100

f(c)
print(c)
