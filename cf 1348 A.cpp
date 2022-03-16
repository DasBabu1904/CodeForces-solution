#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i=0,k=0;
		scanf("%d",&n);
		long long int a=0,b=0;
		a=pow(2,n);
		for(i=1;i<n/2;i++)
		{a=a+pow(2,i);}
		for(k=n/2;k<n;k++)
		{b=b+pow(2,k);}
		printf("%lld\n",a-b);
	}
	return 0;
}