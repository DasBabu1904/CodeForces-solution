#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	while(n--)
    {
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	while(1)
	{
		if(b+c>=d){break;}
		else{d--;}
	}
	printf("%d %d %d\n",b,c,d);
	
    }
    return 0;
}