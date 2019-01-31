t=int(input())
for x in range(0,t):
	n,c=map(int,input().split())
	collection=list(map(int,input().split()))
	collection.sort(reverse=True)
	count=0
	for i in range(0,c):
		n-=collection[i]
		count+=1
		if n<=0:
			break
	print("Scenario #"+str(x+1)+":")
	if n<=0:
		print(count)
	else:
		print("impossible")


		