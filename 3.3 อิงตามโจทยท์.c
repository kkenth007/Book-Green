#include<stdio.h>
main()
{
	int mid,final,hw,x,mid_a,final_a,hw_a;
	char grade;
	printf("Enter a score Midterm 0-100 : ");
	scanf("%d",&mid);
	printf("Enter a score Final 0-100 : ");
	scanf("%d",&final);
	printf("Enter a score Homework 0-10: ");
	scanf("%d",&hw);
	mid_a=(mid*40)/100;
	final_a=(final*50)/100;
	hw_a=(hw*10)/100;
	x=mid_a+final_a+hw_a;
	printf("Score is : %d",x);
	if(90<=x<=100)
	grade='A';
	else if(85<=x<90)
	grade='B+';
	else if(80<=x<85)
	grade='B';
	else if(70<=x<80)
	grade='C+';
	else if(60<=x<70)
	grade='C';
	else if(55<=x<60)
	grade='D+';
	else if(50<=x<55)
	grade='D';
	else if(x<50)
	grade='F';
	else
	printf("\nError");
	
	printf("\nYou Grade is : %c",grade);
} 	





