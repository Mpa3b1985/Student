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

void f(int a, int b, int c, int *pointer)
{
	if(((a*a==b)&&(a*a==c))||((b*b==a)&&(b*b==c))||((c*c==a)&&(c*c==b)))
	{
		(*pointer) = 2;
	}
	else
	{
		if((a*a==b)||(a*a==c)||(b*b==a)||(b*b==c)||(c*c==a)||(c*c==b))
		{
			(*pointer) = 1;
		}
		else
		{
			(*pointer) = 0;
		}
	}
}

void f(int a, int b, int c, int &aref)
{

	if(((a*a==b)&&(a*a==c))||((b*b==a)&&(b*b==c))||((c*c==a)&&(c*c==b)))
	{
		aref = 2;
	}
	else
	{
		if((a*a==b)||(a*a==c)||(b*b==a)||(b*b==c)||(c*c==a)||(c*c==b))
		{
			aref = 1;
		}
		else
		{
			aref = 0;
		}
	}
}

int main()
{
 	int a,b,c,pointer,aref;

	printf("Vvedite pervoe chislo: ");
	scanf("%i",&a);

	printf("Vvedite vtoroe chislo: ");
	scanf("%i",&b);

	printf("Vvedite tretie chislo: ");
	scanf("%i",&c);

	int g=f(a,b,c);
	f(a,b,c,&pointer);
	f(a,b,c,aref);

	printf("Znachenie 1v = %i\n",g);
	printf("Znachenie 2v = %i\n",pointer);
	printf("Znachenie 3v = %i\n",aref);
}