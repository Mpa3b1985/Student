#include<stdio.h>

main()
{
	int day;
	printf("day? ");
	scanf("%i",&day);

	switch(day)
	{
		case 1:
			{
				printf("Mon");
			}
			break;
		case 2:
			{
				printf("Tue");
			}
			break;
		case 3:
			{
				printf("Wed");
			}
			break;
		case 4:
			{
				printf("Thu");
			}
			break;
		case 5:
			{
				printf("Fri");
			}
			break;
		case 6:
			{
				printf("Sat");
			}
			break;
		case 7:
			{
				printf("San");
			}
			break;
		default:
			{
				printf("Error");
			}
	}
}