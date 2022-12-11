#include<stdio.h>
#include<math.h>

main()
{
	int d,m,y;
	printf("day? ");
	scanf("%i",&d);
	printf("month? ");
	scanf("%i",&m);
	printf("year? ");
	scanf("%i",&y);

	int v=y%4;
	if (v==0)
	{
		printf ("Year - leap year");
	}
	else
	{
		printf ("Year - not a leap year");
	}


	int g=y%12;
	switch(g)
	{
		case 1:
			{
				printf(", Eastern calendar year - rooster");
			}
			break;
		case 2:
			{
				printf(", Eastern calendar year - dog");
			}
			break;
		case 3:
			{
				printf(", Eastern calendar year - pig");
			}
			break;
		case 4:
			{
				printf(", Eastern calendar year - rat");
			}
			break;
		case 5:
			{
				printf(", Eastern calendar year - bull");
			}
			break;
		case 6:
			{
				printf(", Eastern calendar year - tiger");
			}
			break;
		case 7:
			{
				printf(", Eastern calendar year - rabbit");
			}
			break;
		case 8:
			{
				printf(", Eastern calendar year - the Dragon");
			}
			break;
		case 9:
			{
				printf(", Eastern calendar year - snake");
			}
			break;
		case 10:
			{
				printf(", Eastern calendar year - horse");
			}
			break;
		case 11:
			{
				printf(", Eastern calendar year - goat");
			}
			break;
		case 12:
			{
				printf(", Eastern calendar year - a monkey");
			}
			break;
	}

	if(((m==12)&&(d>19))||((m==1)&&(d<22)))
	{
		printf(", Zodiac sign - capricom");
	}
	if(((m==1)&&(d>19))||((m==2)&&(d<22)))
	{
		printf(", Zodiac sign - aquarius");
	}
	if(((m==2)&&(d>19))||((m==3)&&(d<22)))
	{
		printf(", Zodiac sign - pisces");
	}
	if(((m==3)&&(d>19))||((m==4)&&(d<22)))
	{
		printf(", Zodiac sign - aries");
	}
	if(((m==4)&&(d>19))||((m==5)&&(d<22)))
	{
		printf(", Zodiac sign - taurus");
	}
	if(((m==5)&&(d>19))||((m==6)&&(d<22)))
	{
		printf(", Zodiac sign - gemini");
	}
	if(((m==6)&&(d>19))||((m==7)&&(d<22)))
	{
		printf(", Zodiac sign - cancer");
	}
	if(((m==7)&&(d>19))||((m==8)&&(d<22)))
	{
		printf(", Zodiac sign - leo");
	}
	if(((m==8)&&(d>19))||((m==9)&&(d<22)))
	{
		printf(", Zodiac sign - virgo");
	}
	if(((m==9)&&(d>19))||((m==10)&&(d<22)))
	{
		printf(", Zodiac sign - libra");
	}
	if(((m==10)&&(d>19))||((m==11)&&(d<22)))
	{
		printf(", Zodiac sign - scorpio");
	}
	if(((m==11)&&(d>19))||((m==12)&&(d<22)))
	{
		printf(", Zodiac sign - sagittarius");
	}
	else
    {
    	printf(", Zodiac sign - WRONG DATE");
    }
}