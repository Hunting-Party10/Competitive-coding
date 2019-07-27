import math
def main():
	n=int(input())
	sum=0
	j=1
	l=math.floor(math.sqrt(n))
	for i in range(1,l+1):
		j=i+1
		while i*j<=n:
			sum=sum+1
			j=j+1
	sum=sum+l
	print(sum)
			
main()