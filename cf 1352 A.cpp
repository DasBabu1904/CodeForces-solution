#include<stdio.h>
#include<math.h>

int round_num(int x);

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n=0;
		scanf("%d",&n);
		round_num(n);
	}
	return 0;
}

int round_num(int x)
{
	int round=0;
	int i=0;
	int count=0,n=x;
	
	while(n)
	{
		if(n%10!=0)
		{count++;}
		n=n/10;
	}
	printf("%d\n",count);
		
	while(1)
	{
		round=x%10;
		x=x/10;
		round=round*pow(10,i);
		if(round!=0)
		{printf("%d ",round);}
		if(x==0){ 
		                    printf("\n");
		                    return 0;
		                }
		else i++;
	}
}