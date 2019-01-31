def display(equation):
	if "machula" in equation[0]:
		print(int(equation[4])-int(equation[2]),equation[1],equation[2],equation[3],equation[4])
		return
	if "machula" in equation[2]:
		print(equation[0],equation[1],int(equation[4])-int(equation[0]),equation[3],equation[4])
		return
	if "machula" in equation[4]:
		print(equation[0],equation[1],equation[2],equation[3],int(equation[0])+int(equation[2]))
		return

def main():
	t=int(input())
	while t>0:
		m=input()
		equation=input().split()
		print(equation)
		display(equation)
		t=t-1


main()