#include<stdio.h>


main()
{
	int i=1;
	while(i<10)
	{
		printf("Hello\n");
		i=i+1;
	}

	int z=0;
	while(z<15)
	{
		if(z%2==1)
		{
			printf("%i\n",z);
		}
		z=z+1;
	}

	int s=5;
	int sum=0;
	while(s<15)
	{
		sum=sum+s;
		printf("%i+",s);
		s=s+1;
	}
	sum=sum+s;
	printf("%i=%i",s,sum);
}