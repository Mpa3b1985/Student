#include<stdio.h>

main()
{
	int a=7;
	int b=8%2;

	if(b==0)
	{
		printf("delyatsya na 2\n");
	}
	else
	{
		printf("ne delyatsya na 2\n");
	}
	if(b>0)
	{
		printf("delyatsya na 3\n");
	}
	else
	{
		printf("ne delyatsya na 3\n");
	}

	while(a!=8)
	{
		scanf("%i",&a);
		if(a<=7)
		{
			printf("bolshe 7\n");
		}
		else
		{
			if(a>=10)
			{
				printf("menshe 10\n");
			}
		}
	}
	printf("Super");
}