#include<stdio.h>

main()
{
	int a=7;
	while(a!=5)
	{
		scanf("%i",&a);
		if(a>5)
		{
			printf("bolshe\n");
		}
		else
		{
			if(a<5)
			{
				printf("menshe\n");
			}
		}
	}
	printf("Super");
}