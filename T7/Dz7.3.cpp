#include<stdio.h>
#include <iostream>
#include<math.h>

int f(int a, int b, int c)
{
	if(((a*a==b)&&(a*a==c))||((b*b==a)&&(b*b==c))||((c*c==a)&&(c*c==b)))
	{
		return 2;
	}
	else
	{
		if((a*a==b)||(a*a==c)||(b*b==a)||(b*b==c)||(c*c==a)||(c*c==b))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

void f(int a, int b, int c, int *pz)
{

	if(((a*a==b)&&(a*a==c))||((b*b==a)&&(b*b==c))||((c*c==a)&&(c*c==b)))
	{
		(*pz) = 2;
	}
	else
	{
		if((a*a==b)||(a*a==c)||(b*b==a)||(b*b==c)||(c*c==a)||(c*c==b))
		{
			(*pz) = 1;
		}
		else
		{
			(*pz) = 0;
		}
	}
}

void f(int a, int b, int c, int z)
{

	if(((a*a==b)&&(a*a==c))||((b*b==a)&&(b*b==c))||((c*c==a)&&(c*c==b)))
	{
		z = 2;
	}
	else
	{
		if((a*a==b)||(a*a==c)||(b*b==a)||(b*b==c)||(c*c==a)||(c*c==b))
		{
			z = 1;
		}
		else
		{
			z = 0;
		}
	}
}

int main()
{
 	int a,b,c,z;

	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);

	int &aref = z;

	int g=f(a,b,c);
	f(a,b,c,&z);

	printf("Znachenie 1v = %i\n",g);
	printf("Znachenie 2v = %i\n",z);
	printf("Znachenie 3v = %i\n",aref);
}