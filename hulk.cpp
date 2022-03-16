#include<stdio.h>
main()
{
char love[]={'I',' ','l','o','v','e','\0'}, it[]={'i','t','\0'},that[]={'t','h','a','t','\0'},hate[]={'I',' ','h','a','t','e','\0'};
int n,i=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%2==0)
	   {
		printf("%s ",love);
 	   if(i+1>n){printf("%s",it);}
    	if(i+1<=n){printf("%s ",that);}
		}

	if(i%2!=0)
	{
		printf("%s ",hate);
		if(i+1>n){printf("%s",it);}
    	if(i+1<=n){printf("%s ",that);}
	}

}
return 0;
}