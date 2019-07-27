t=int(input())
while t  != 0:
	n,c=map(int,input().split())
	a=list(map(int,input().split()))
	flag=0
	for x in range(0,n):
		if c < a[x]:
			flag=1
			break
		else:
			c-=a[x]
	if flag ==0:
		print('Yes')
	else:
		print('No')
	t-=1
