operators=["+", "-", "*", "/", "^"]
precedence={"+":0, "-":1, "*":2, "/":3, "^":4 ,"(":-1}
alpha='abcdefghijklmnopqrstuvwxyz'
def preCheck(op1,op2):
    if precedence[op1]>=precedence[op2]:
        return True
    else: return False

def convert(s):
	stackoperand=list()
	ans=""
	for x in s:
		if x in alpha:
			ans=ans+x	
		elif x in operators:
			c=stackoperand.pop()
			while (preCheck(c,x) and c is not '('):
				ans=ans+c
				c=stackoperand.pop()
			stackoperand.append(c)
			stackoperand.append(x)
		elif x == '(':
			stackoperand.append(x)
		else:
			c=stackoperand.pop()
			while c is not '(':
				ans=ans+c
				c=stackoperand.pop()
	print(ans)													
	
def main():			
	s=[]
	t=int(input())
	x=0
	for x in range(0,t):
		s.append(input())
	for x in range(0,t-1):
		convert(s.pop(x))
	convert(s.pop(-1))


main()
	