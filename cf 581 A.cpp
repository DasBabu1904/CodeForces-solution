#include<stdio.h>
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	b=(b-a)/2;
	printf("%d %d",a,b);
	return 0;
}