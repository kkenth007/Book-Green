#include<stdio.h>
float x,dis,cash,addis;
main()
{
	printf("\n Customer Discount\n");
	printf("\n Total : ");
	scanf("%f",&x);
	printf("\n Your Discount is percent : ");
	scanf("%f",&addis);
	dis = (x*addis)/100;
	printf("\n Your Discount is %.0f Baht",dis);
	cash=x-dis;
	printf("\n Your pay is %.0f Baht\n",cash);
	getch();
}
