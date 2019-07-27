def main():
	t=int(input())
	for x in range(0,t):
		c=input()
		n=int(input())
		s=0
		for z in range(0,n):	
			l=int(input())
			s=s+l%n
		if s%n==0:
			print("YES")
		else:
			print("NO")

main()
		