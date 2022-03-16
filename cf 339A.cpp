#include<stdio.h>
main()
{
	char ar[102];
	int i,j;
	char swap;
	scanf("%s",ar);
	for(j=0;j<100;j++)
	{
	for(i=0;ar[i+1]!='\0';i=i+2)
	{
		if(ar[i]>ar[i+2])
		{
			swap=ar[i];
			ar[i]=ar[i+2];
			ar[i+2]=swap; 
		}
	}
	}
	printf("%s",ar);
	return 0;
}