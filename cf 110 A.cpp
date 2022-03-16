#include<stdio.h>
int main()
{
	long long int n,r;
	scanf("%lld",&n);
	while(1)
	{
		r=n%10;
		n=n/10;
		if(r!=4 && r!=7)
		{
			printf("NO\n");
			return 0;
		}
		if(n==0)
		{break;}
	}
	printf("YES\n");
	return 0;
}