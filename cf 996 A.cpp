#include<stdio.h>
main()
{
	int n,bills=0;
	scanf("%d",&n);
	bills=bills+n/100;
	n=n%100;
	bills=bills+n/20;
	n=n%20;
	bills=bills+n/10;
	n=n%10;
	bills=bills+n/5;
	n=n%5;
	bills=bills+n;
	printf("%d\n",bills);
	return 0;
}