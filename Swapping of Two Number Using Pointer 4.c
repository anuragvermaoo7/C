#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s,*ptr,*pt;
	
	printf("Enter Two Numbers");
	scanf("%d%d",&a,&b);
	
	ptr=&a;
	pt=&b;
	s=*ptr;
	*ptr=*pt;
	*pt=s;
	
	printf("\nSwapping of a %d",a);
	printf("\nSwapping of b %d",b);
	getch();
	
}
