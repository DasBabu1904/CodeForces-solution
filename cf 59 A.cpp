#include<stdio.h>
main()
{
	char a[101];
	int i,low=0,high=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a')
		{low++;}
		if(a[i]<'a')
		{high++;}
	}
	if(low>=high)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]<'a')
			{
				a[i]=a[i]+'a'-'A';
			}
		}
	}
	else
	{
		for(i=0;a[i]!='\0';i++)
		{
		if(a[i]>='a')
		{
			a[i]=a[i]-'a'+'A';
		}
		}
	}
	printf("%s",a);
	return 0;
}