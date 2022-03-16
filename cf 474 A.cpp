#include<stdio.h>
#include<string.h>
char shift;
char correction(char x);
int main()
{
	int i=0;
	char s[102];	
	scanf("%c",&shift);
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		s[i]=correction(s[i]);
		
	}
	
	printf("%s",s);
	return 0;
}

char correction(char x)
{
	int i=0,k=0;
	char group[3][102];
	strcpy(group[0],"qwertyuiop");
	strcpy(group[1],"asdfghjkl;");
	strcpy(group[2],"zxcvbnm,./");
	for(k=0;k<3;k++)
	{
	for(i=0;group[k][i]!='\0';i++)
	{
		if(x==group[k][i] && shift=='R')
		{
			x=group[k][i-1];
			return x;
		}
		else if(x==group[k][i] && shift=='L')
		{
			x=group[k][i+1];
			return x;
		}
		
	}
	}
}
		