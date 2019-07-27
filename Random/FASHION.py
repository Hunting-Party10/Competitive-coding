def main():
	t=int(input())
	while t:
		n=int(input())
		man=[]
		woman=[]
		man=sorted(map(int,input().split()))[::-1]
		woman=sorted(map(int,input().split()))[::-1]
		man.sort()
		woman.sort()
		sum=0
		for x,y in zip(man,woman):
			sum=sum+x*y
		t=t-1
		print(sum)

main()