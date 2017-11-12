#include<stdio.h>
int main()
{
	int a,b,c,m,i;
	printf(" Enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c)?m=a:b;
	(b>c)?(m=b):(m=c);
	 
	for(i=m;i>=1;i--){
		if(a%i==0&&b%i==0&&c%i==0){
		printf("\n GCD is : %d",i) ;
		break;
		}
	}
	return 0;
}
