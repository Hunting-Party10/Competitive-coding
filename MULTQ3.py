


def main():
	n,q= map(int, input().split())
	ans = [0]*n
	for x in range(0,q):
		l = list(map(int,input().split()))
		if l[0] == 0:
			for z in range(l[1],l[2]+1):
				ans[z]+=1
		else:
			c=0
			for z in ans:
				if z%3 == 0:
					c+=1
			print(c)

main()