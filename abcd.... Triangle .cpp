#include<stdio.h>
int main()
{
	int A,n,i,j;
	scanf("%d",&n);
	A=65+n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{ printf(" ");}
	   for(;j<=n;j++)
	   { printf("%c",A-j);}
	   printf("\n");
	}
	return 0;
}
	