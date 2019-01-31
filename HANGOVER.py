def cal(f):
	count=0
	ans=0.00
	x=2
	while ans<f:
		ans=ans+1/x
		x=x+1
		count=count+1
	print(count,"card(s)")	


def main():
	t=float(input())

	while t > 0.00:
		cal(t)
		t=float(input())

main()