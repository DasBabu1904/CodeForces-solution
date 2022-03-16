#include<stdio.h>
main()
{
	int k,w,n,ans;
	scanf("%d%d%d",&k,&n,&w);
	ans=(w*(w+1)/2)*k-n;
	if(ans>0)
	printf("%d\n",ans);
	else
	printf("0\n");
	return 0;
	
}