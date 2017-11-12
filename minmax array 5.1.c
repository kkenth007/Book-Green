#include<stdio.h>
main()
{
	int size,i,max,min;
	printf("\n Enter array size : ");
	scanf("%d",&size);
	int array[size];
	printf(" Enter array element\n\n");
	for (i=0;i<size;i++)
	{
		printf(" Number %d : ", i+1);
		scanf("%i",&array[i]);
	}
	max=array[0];
	for (i=0;i<size;i++)
	{
		(array[i]>max)? max=array[i]:printf("");
	}
		min=array[0];
		for (i=0;i<size;i++)
		{
			(array[i]<min)?min=array[i] : printf("");
		}
		printf("\n Max is : %d\n Min is : %d\n",max,min);	
}
