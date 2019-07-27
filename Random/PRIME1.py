from sys import stdin
import math
def seive(n,simple):
	for x in range(2,n):
		if simple[x]==True:
			l=x*2
			while l<n:
				simple[l]=False
				l=l+x
	z=n-1
	vector=[]
	while z>=2:
		if simple[z]==True:
			vector.append(z)
		z-=1
	return vector
			
def segmented(m,n):
	rootn=math.floor(math.sqrt(n))+1
	simple=[True]*rootn
	vector=seive(rootn,simple)
	seg=[True]*(n-m+2)
	seglen=n-m
	l=len(vector)
	while l>0:
		z=vector.pop()
		x=int((m/z))*z
		if x<m:
			x+=z
		y=x-m
		while y<=n-m+1:
			seg[y]=False
			y=y+z
		l-=1
	for x in range(0,seglen+1):
		if seg[x]==True:
			print(x+m)

def main():
	t=int(stdin.readline())
	while t>0:
		m,n=map(int,stdin.readline().split())
		segmented(m,n)
		t-=1

main()