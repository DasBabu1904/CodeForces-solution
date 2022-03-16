#include<stdio.h>
#include<string.h>
main()
{	
	int n,i=0,x=0;
	scanf("%d",&n);
	char str[20];
	char ic[]={"Icosahedron"};
	char c[]={"Cube"};
	char t[]={"Tetrahedron"};
	char d[]={"Dodecahedron"};
	char o[]={"Octahedron"};
	
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		if(strcmp(str,ic)==0)
		x=x+20;
		if(strcmp(str,c)==0)
		x=x+6;
		if(strcmp(str,t)==0)
		x=x+4;
		if(strcmp(str,d)==0)
		x=x+12;
		if(strcmp(str,o)==0)
		x=x+8;
	}
	printf("%d",x);
	return 0;
}
