#include<stdio.h>

main()
{
	int i=1;
	int sum=0;
	for(;i<100;i=i+1)
	{
		sum=sum+i;
		printf("%i+",i);
	}
	sum=sum+i;
	printf("%i=%i",i,sum);
}