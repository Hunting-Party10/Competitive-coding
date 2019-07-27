import math
def palcheck(check):
	if check[::-1] == check:
		return True
	else:
		return False
    	
def mirror(s, length):
	pivot = math.ceil(length/2)
	i=length
	j=0
	while j<pivot:
		s[i]=s[j]
		j=j+1
		i=i-1

def nextpal(s):
	temp = list(s)
	l = len(s)-1
	if palcheck(s) == False:
		mirror(temp,l)
	i=math.floor(l/2)
	j=math.ceil(l/2)
	n1 = int(s)
	n2 = int(''.join(temp))
	if n2 <= n1:
		n1=str(n1)
		while temp[i]<=n1[i]:
			if i == -1:
				print(int(s)+2)
				return
			if temp[i] == '9':
				temp[i]='0'
				temp[j]='0'
				i=i-1
				j=j+1
				continue
			elif i==j:
				temp[i] = str(int(temp[i])+1)
			else:
				temp[i] = str(int(temp[i])+1)
				temp[j] = str(int(temp[j])+1)
		print(int(''.join(temp)))
	else:
		print(int(''.join(temp)))

def main():
    t = int(input())
    s = []
    for x in range(0, t):
        s.append(input())
    for x in s:
        nextpal(x)

main()
