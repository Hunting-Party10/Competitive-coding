
n=1
t=0
ans=list()
while n is not 0:
	n=int(input())
	if n == 0:
		break
	else:
		t=t+1	
		ans.append(int(n*(n+1)*(2*n+1)/6))

for x in range(0,t-1):
	print(ans.pop(0))
print(ans.pop(-1))