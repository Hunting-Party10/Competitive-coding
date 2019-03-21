def calculate(n,k,A):
	c=0
	for x in range(0,len(A)):
		t = n - A[x]
		if t < 0:
			break
		n = t
		c += 1
	print(c)
	


def main():
	t=int(input())
	for x in range(0,t):
		n = int(input())
		k = int(input())
		A = list(map(int ,input().split()))
		calculate(n,k,A)

main()