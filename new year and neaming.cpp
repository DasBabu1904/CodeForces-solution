#include<stdio.h>
int main()
{
	int n,m,i=1,q,y;
	scanf("%d%d",&n,&m);
	char s[n+1][11];
	char t[m+1][11];
	for(;i<=n;i++)
	 {scanf("%s",s[i]);}
   for(i=1;i<=m;i++)
     {scanf("%s",t[i]);}
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
    	scanf("%d",&y);
    	if(y%n==0){printf("%s",s[n]);}
    	else{printf("%s",s[y%n]);}
    	if(y%m==0){printf("%s\n",t[m]);}
    	else{printf("%s\n",t[y%m]);}
    }
    return 0;
}