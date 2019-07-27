import math
def main():
	t=int(input())
	while t>0:
		n=int(input())
		p=0
		q=0
		if n==1:
			print("TERM 1 IS 1/1")
		else:
			start=5
			z=1
			while True:
				if z+start<n:
					z+=start
					start+=4
				else:
					break
			temp=n-z
			pivot=int(math.ceil(start/2))
			if temp<=pivot:
				p=temp
				q=pivot-1+p-1
			else:
				p=pivot-(temp-pivot)
				q=pivot+1-p
			print("TERM",n,"IS "+str(p)+"/"+str(q))
		t-=1


main()