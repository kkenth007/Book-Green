#include<stdio.h>
main()
{
	int m,loop,n[loop],i,gcd;
	printf(" Enter N = ");
	scanf("%d",&loop);
	i=loop;
	for(i=0;i<loop;i++)
	{
		printf(" n%d = ",i+1);
		scanf(" %d",&n[i]);
	}
	for(i=1;i<=n; i++)
    {
        // Checks if i is factor of both integers
        //if(n%i==0)
        gcd = i;
    }
	printf(" G.C.D is %d",gcd);
}
