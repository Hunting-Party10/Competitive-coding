#(x,x)-0,1,4,5,8,9,12,13..
#(x,x-2)-2,3,6,7,10,11

def number(x,y):
	#print(x)
	#print(y)
	if x == y :
		i=0
		z=0
		while z in range (0,x):
			if z == x :
				break
			i=i+1
			z=z+1
			if z == x :
				break
			i=i+3
			z=z+1
		print(i)
	elif x-2 == y :
		i=2
		z=2
		while z in range (0,x):
			if z == x :
				break
			i=i+1
			z=z+1
			if z == x :
				break
			i=i+3
			z=z+1
		print(i)
	else:
		print('No Number')
t=int(input())
x=list()
y=list()
z=0

for z in range (0,t):
	a=input()
	x.append(int(a[0]))
	y.append(int(a[2]))
x.reverse()
y.reverse()
for z in range(0,t):
	number(x.pop(),y.pop())
#number(x.pop(-1),y.pop(-1))