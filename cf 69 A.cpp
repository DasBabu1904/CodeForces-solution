#include<stdio.h>
main()
{
	int n,resultant[1][3];
	resultant[0][0]=0;
	resultant[0][1]=0;
	resultant[0][2]=0;
	
	scanf("%d",&n);
	if(n>0)
	{
	int vectors[3][n];
	int i=0,j=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&vectors[j][i]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		resultant[0][0]=resultant[0][0]+vectors[0][i];
		resultant[0][1]=resultant[0][1]+vectors[1][i];
		resultant[0][2]=resultant[0][2]+vectors[2][i];
	}
	
	if( resultant[0][0]==0 && resultant[0][1]==0 && resultant[0][2]==0)
	{
		printf("YES\n");
	}
	else
	{ printf("NO\n");}
	}
	return 0;
}

		