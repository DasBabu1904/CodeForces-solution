#include<stdio.h>
main()
{
	int i=1;
	char ar[102];
	scanf("%s",ar);
	if(ar[0]>=97 && ar[1]<97)
	{
		ar[0] = ar[0]-32;
		for(i=1;ar[i]!='\0';i++)
		{
		ar[i]=ar[i]+32;
		}
	}
	if(ar[0]<97 && ar[1]<97)
	{
		ar[0]=ar[0]+32;
	}
	if(ar[0]>=97 && ar[1]>=97)
	{
		ar[0]=ar[0]-32;
	}
	printf("%s",ar);
	return 0;
}