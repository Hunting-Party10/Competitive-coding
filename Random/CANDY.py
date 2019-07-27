def get_in(z):
	try:
		int(z)
	except ValueError:
		return False
	else:
		return int(z)


def calculate(z,ans):
	bags=[]
	for x in range(0,z):
		temp=get_in(input())
		while temp==False:
			temp=get_in(input())
		bags.append(temp)
	temp=get_in(input())
	while temp==False:
		temp=get_in(input())
	sum=0
	for x in bags:
		sum=sum+x
	moves=0
	if sum%z:
		ans.append(-1)
	else:
		avg=sum//z
		for x in bags:
			s=avg-x
			if s>0:
				moves=moves+s
		ans.append(moves)
	if temp is not -1:
		calculate(temp,ans)
	else:
		return
			
def main():
	t=get_in(input())
	while t==False:
		t=get_in(input())
	ans=[]
	calculate(t,ans)
	for x in ans:
		print(x)

main()
	