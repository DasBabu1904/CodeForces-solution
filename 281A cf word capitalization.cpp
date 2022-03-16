#include<stdio.h>
main()
{
	char ar[1002];
	scanf("%s",ar);
	if(ar[0]>=97){ar[0]=ar[0]-'a'+'A';}
	printf("%s",ar);
	return 0;
}