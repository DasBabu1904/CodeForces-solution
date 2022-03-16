#include<stdio.h>
main()
{
	int i=0;
	char num1[102],num2[102];
	scanf("%s%s",num1,num2);
	char result[102];
	
	for(i=0;num1[i]!='\0';i++)
	{
		if(num1[i]==num2[i]){result[i]='0';}
		if(num1[i]!=num2[i]){result[i]='1';}
		if(num1[i+1]=='\0'){result[i+1]='\0';}
	}
	printf("%s\n",result);
	return 0;
}