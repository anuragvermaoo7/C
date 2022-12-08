#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,*ptr;

	printf("Enter Two Numbers");
	scanf("%d%d",&a,&b);
	
	sum=a+b;
	ptr=&sum;
	
	printf("%d",*ptr);
	
	getch();
}
