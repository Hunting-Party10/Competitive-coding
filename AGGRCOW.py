from sys import stdin

def routine(n,c,stallpos):
	l=0
	r=stallpos[n-1]-stallpos[0]+1
	minimum=0
	while l<=r:
		mid=int((l+r)/2)
		ans=check(mid,c,stallpos,n)
		if ans==True:
			l=mid+1
			minimum=mid
		else:
			r=mid-1
	print(minimum)

def check(z,c,stallpos,n):
	x=0
	cow=1
	l=1
	while l<n:
		if stallpos[l]-stallpos[x] >= z:
			cow=cow+1
			x=l
			if cow == c:
				return True
		l=l+1	
	return False

def main():
	t=int(stdin.readline())
	while t>0:
		stallpos=[]
		n,c=map(int,stdin.readline().split())
		for x in range(0,n):
			stallpos.append(int(stdin.readline()))
		stallpos.sort()
		routine(n,c,stallpos)
		t=t-1

main()