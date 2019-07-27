import math
def cal(n,k):
	if n==0:
		print(n)
	else:
		x=int((n-k)/2)
		print(x+k)
		print(x)

def main():
	for x in range(0,1):
		n=int(input())
		k=int(input())
		cal(n,k)

main()