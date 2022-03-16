#include<stdio.h>
main()
{
	int n,t,j=0,i=0,k=0;
	scanf("%d%d",&n,&t);
	getchar();
	char ar[n+2];
	char swap;
	scanf("%s",ar);
	for(i=0;i<=n; i=i+1+k)
	{
		  for(j=0,k=0;k<t;k++,j--)
			{
				if(ar[i+j]=='B'&&ar[i+1+j]=='G')
				{
				swap=ar[i+j];
				ar[i+j]=ar[i+1+j];
				ar[i+1+j]=swap;
				}
				if(ar[i+k] =='B'&& ar[i+1+k]=='G')
				{
					swap=ar[i+k];
				ar[i+k]=ar[i+1+k];
				ar[i+1+k]=swap;
				}
			}
	}
	printf("%s",ar);
	return 0;
} 