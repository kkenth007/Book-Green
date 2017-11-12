#include<stdio.h>
main()
{
	int hh,mm,ss;
	printf("Enter Time Hour: ");
	scanf("%f",&hh);
	printf("Enter Time Min: ");
	scanf("%d",&mm);
	printf("Enter Time Sec: ");
	scanf("%f",&ss);
	if(ss>=60 )
	{
		ss=ss-60;
		mm++;
	}
	if(mm>=60 )
	{
		mm=mm-60;
		hh++;
	}
	if(hh>=24 )
		hh=hh-24;
	printf("Current time is %d:%d:%d ",hh,mm,ss);	
}
