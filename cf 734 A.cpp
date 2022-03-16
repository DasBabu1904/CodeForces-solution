#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	char s[n+2];
	int i=0,A=0,D=0;
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='A')
		{A++;}
		else if(s[i]=='D')
		{D++;}
		else if(s[i]=='\0')
		{break;}
	}
	if(A>D)
	printf("Anton\n");
	else if (D>A)
	printf("Danik\n");
	else if (A==D)
	printf("Friendship\n");
	
	return 0;
}