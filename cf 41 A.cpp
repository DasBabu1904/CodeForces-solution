#include<stdio.h>
#include<string.h>
main()
{
	int length, i=0;
	char s[102];
	char op[102];
	char t[102];
	scanf("%s",s);
	getchar();
	scanf("%s",op);
	length = strlen(s);
	for(i=1;i<=length;i++)
	{
		t[length-i]= s[i-1];
	}
	if(strcmp(t,op)==0)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
	return 0;
}