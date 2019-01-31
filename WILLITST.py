

def check(n):
	i=2
	while i<n:
		i=i*2
	if i==n:
		print("TAK")
	else:
		print("NIE")


def main():
	n=int(input())
	if n==1:
		print("TAK")
	else:
		check(n)

main()