import math
def cal(a,b):
	if b==0:
		return 1
	binary=[]
	val=[]
	i=2
	x=a
	val.append(a)
	while i<=b:
		val.append(int(math.pow(x,2)%10))
		x=int(math.pow(x,2)%10)
		i=i*2
	while b>1:
		binary.append(int(b%2))
		b=int(math.floor(b/2))
	binary.append(1)
	binary.reverse()
	val.reverse()
	l=len(binary)
	ans=1
	z=0
	for x in binary:
		if x==1:
			ans=ans*val[z]
		z=z+1
	return ans%10

def main():
	t=int(input())
	for x in range(0,t):
		z=input().split()
		print(cal(int(z[0]),int(z[1])))

main()