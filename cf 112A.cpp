#include<stdio.h>
main()
{
	int i=0,j=0,k=0;
	char ar[102],ar2[102];
	scanf("%s%s",ar,ar2);
	for(i=0;ar[i]!='\0';i++)
	{
		if(ar[i]>='a'){ar[i]=ar[i]-('a'-'A');}
		if(ar2[i]>='a'){ar2[i]=ar2[i]-('a'-'A');}
		if(ar[i]>ar2[i]){printf("1\n");
		                        return 0;
		                        }
		if(ar[i]<ar2[i]){
			                    printf("-1\n");
			                     return 0;
			                     }
	}
	printf("0\n");
	return 0;
}
	
		