#include<stdio.h>
main()
{
	char ar[102];
	int a=0,i;
	scanf("%s",ar);
	for(i=0;ar[i+1]!='\0';i++)
	{
		if(ar[i]==ar[i+1])
		{
			a++;
			if(a>=6)
			{
				printf("YES\n");
				return 0;
			}
		}
			if(ar[i]!=ar[i+1])
			{a=0;}
	}
	printf("NO\n");
	return 0;
}