#include<stdio.h>
main()
{
	int i=0,x=0;
	char s[202];
	scanf("%s",s);
	while(1)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]== 'B')
		{
			if(x!=0 && s[i+3]!='\0'){printf(" ");}
			i=i+3;
		}
		else 
		{
			if(s[i]=='\0'){ return 0;}
			else
			{
				printf("%c",s[i]);
				i++;
				x++;
			}
		}
	}
	return 0;
}