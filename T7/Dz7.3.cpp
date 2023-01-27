#include<stdio.h>
#include <iostream>
#include<math.h>

int f(int a, int b, int c)
{
	if(((a*a==b)&&(a*a==c))||((b*b==a)&&(b*b==c))||((c*c==a)&&(c*c==b)))
	{
		return 0;
	}
	else
	{
		if((a*a==b)||(a*a==c)||(b*b==a)||(b*b==c)||(c*c==a)||(c*c==b))
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
}

int main()
{
	int a,b,c;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	int g=f(a,b,c);

	switch(g)
	{
		case 0:
			{
				printf("Dva");
			}
			break;
		case 1:
			{
				printf("Odno");
			}
			break;
		case 2:
			{
				printf("ni odnogo");
			}
			break;
	}
}