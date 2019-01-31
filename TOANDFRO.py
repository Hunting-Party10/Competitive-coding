
def dec(y,ans):
	s1=input()
	s2=''
	l=len(s1)
	k=0
	z=1
	while k<y:
		s2=s2+s1[k]
		x=y*2-1-k
		j=4
		while x<l:
			s2=s2+s1[x]
			x=x+z
			if x <l:
				s2=s2+s1[x]
				x=y*j-1-k
				j=j+2
			else:
				break
		k=k+1
		z=z+2

	ans.append(s2)
	y=int(input())
	if y is not 0:
		dec(y,ans)
	else:
		return

def main():
	ans=[]
	y=int(input())
	if y is not 0:
		dec(y,ans)
	for x in ans:
		print(x)

main()