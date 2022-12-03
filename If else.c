#include <stdio.h>
#include <conio.h>

void main ()
{
	int x,y,z;
	
	printf("Enter first Numbers ");
	scanf("%d",&x);
	
	printf("Enter Second Numbers ");
	scanf("%d",&y);
	
	printf("Enter third Numbers ");
	scanf("%d",&z);
	
	if (x<y&&x<z)
		printf("%d is the smallest",x);
	else if (y<z)
		printf("%d is the smallest",y);
	else
		printf("%d is the smallest",z);
		
	getch();
}
