#include<stdio.h>
#include<string.h>

main()
{
	char str[100];

	gets(str);

	int q=strlen(str);

	printf("\n%c\n\n",str[q-1]);

	int buf=str[0];
	str[0]=str[q-1];
	str[q-1]=buf;

	puts(str);
}