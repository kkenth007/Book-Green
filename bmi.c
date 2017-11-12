#include <stdio.h>
main ()
{
	float bmi,h,t;
	int n;
	system("color a");
	printf("\n\t\t (Body Mass Index : BMI)\n ");
	printf("\n    Enter hight : ");
	scanf("%f",&h);
	printf("\n    Enter N : ");
	scanf("%d",&n);
	t= h/100*h/100;
	bmi= n/t;
	printf("\n    **************************************\n");
	printf("\n    BMI is : %.2f\n",bmi);
	
	(bmi>30)? printf("\n    Body is : very Fat level 3  "):printf("");
	(bmi>=25 && bmi<=29.90)? printf("\n    Body is : very Fat level 2  "):printf("");
	(bmi>=23 && bmi<=24.90)? printf("\n    Body is : very Fat level 1  "):printf("");
	(bmi>=18.50 && bmi<=22.90)?	printf("\n    Body is : Normol\n  "):printf("");
	(bmi<18.50)? printf("\n    Body is : Thin  "):printf("");
	getche();
}

