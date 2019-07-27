/*
 ============================================================================
 Name        : Trailing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int trail(int x)
{
	int counter=0;
	int i=1;
	int t=x;
	int loop=0;
	int f=1;
	while(f<=t)
	{
		f=f*5;
		loop++;
	}
	if(loop>0)
	{
		while(i<=loop)
			{
				int temp=t/pow(5,i);
				counter+=temp;
				i++;
			}
	}

	return counter;
}

int main(void) {
	setvbuf(stdout, NULL,_IONBF,0);
	setvbuf(stderr, NULL,_IONBF,0);
	int t;
	scanf("%d",&t);
	int i;
	int nos[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&nos[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",trail(nos[i]));
	}

}
