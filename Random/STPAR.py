def main():
	t=int(input())
	while t is not 0:
		order=[]
		order=list(map(int,input().split()))
		arraycount=0
		count=1
		stack=[]
		flag=0
		while count<=t:
			if arraycount<len(order) and order[arraycount] == count:
				count+=1
				arraycount+=1
				continue
			if len(stack) is not 0:
				if stack[-1] == count:
					count+=1
					stack.pop()
					continue
				if stack[-1]<order[arraycount]:
					flag=1
					break				
			stack.append(order[arraycount])
			arraycount+=1
		if flag==1:
			print("no")
		else:
			print("yes")
		t=int(input())


main()


