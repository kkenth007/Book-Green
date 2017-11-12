#include <stdio.h>
#include <conio.h>
main ()
{
	int i,sum=1,num;
	printf("Enter a Fac : ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	sum=sum*i;
	printf("%d ! %d\tFac is : %d",num,i,sum);	
}

