
import math
import sys
def cal(memo,coin):
	ans=0
	if coin>1000001:
		ans=cal(memo,int(math.floor(coin/2)))+cal(memo,int(math.floor(coin/3)))+cal(memo,int(math.floor(coin/4)))
	elif memo[coin] is not -1:
		return memo[coin]
	else:
		ans=cal(memo,int(math.floor(coin/2)))+cal(memo,int(math.floor(coin/3)))+cal(memo,int(math.floor(coin/4)))
		#print(ans)
		if ans>coin:
			memo[coin]=ans
		else:
			memo[coin]=coin
	return ans

def main():
	memo=[-1]*1000001
	for x in range(0,12):
		memo[x]=x	
	for x in sys.stdin:
		print(cal(memo,int(x)))

main()