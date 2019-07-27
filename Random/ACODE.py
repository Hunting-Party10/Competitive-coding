def cal(code,memo):
	ls=list(code)
	l=len(ls)
	num=int(code)
	if num>1000000:
		ans=cal(''.join(ls[0:int(l/2)]),memo)+cal(''.join(ls[int(l/2):l]),memo)
		return ans
	if memo[num] is not -1 and ls[0] is not '0':
		return memo[num]
	else:
		for x in range(0,l):
			if x+1 == l:
				if ls[x] is not '0':
					ans=ans+1
			else:
				if int(ls[x])==1
				string=str(ls[x])+str(ls[x+1])
		memo[num]=ans
		return ans

def main():
	memo=[-1]*1000001
	for x in range(1,10):
		memo[x]=1
	for x in range(10,27):
		memo[x]=2
	memo[0]=0
	memo[10]=1
	memo[20]=1
	code=input()
	while code is not '0':
		print(cal(code,memo))
		code=input()

main()