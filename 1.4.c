#include<stdio.h>
main()
{
	int mid,final,hw,Total,mid_a,final_a,hw_a;
	printf("Enter a score Midterm : ");
	scanf("%d",&mid);
	printf("Enter a score Final : ");
	scanf("%d",&final);
	printf("Enter a score Homework : ");
	scanf("%d",&hw);
	mid_a=(mid*40)/100;
	final_a=(final*50)/100;
	hw_a=(hw*10)/100;
	Total=mid_a+final_a+hw_a;
	printf("Score is : %d",Total);
}
