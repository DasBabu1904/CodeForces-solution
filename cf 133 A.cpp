#include<stdio.h>
main()
{
	char ar[102];
	scanf("%s",ar);
	int i=0;
	for(i=0; ar[i]!='\0'; i++)
	{
		if(ar[i]=='H'|| ar[i]=='Q'||ar[i]=='9')
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}