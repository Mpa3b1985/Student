#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	char rst[100];

	gets(str);

	int q=0;

	for(int i=strlen(str);i>=0;i--)
	{
		rst[q]=str[i-1];
		q++;
	}

	puts(rst);
}