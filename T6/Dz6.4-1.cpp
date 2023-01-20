#include<stdio.h>
#include<string.h>

main()
{
	char str[100];

	gets(str);

	for(int i=0;i<strlen(str);i++)
	{
		str[i]=str[i+1];
	}

	puts(str);
}