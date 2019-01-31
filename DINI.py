def main():
	t=int(input)
	while t>0:
		n,k,q=map(int,input().split())
		phil=[0]*n
		phil[k]=1
		for x in range(0,q):
			t=int(input())
			prev=[]
			prev.append(k)
			z=0
			l=len(prev)
			while z<l:
				pre=prev.pop(-1)
				

			


main()