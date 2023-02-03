#include<stdio.h>
#include<string.h>

char f1(char *str, char i)
{
	str[0]=i;
	str[strlen(str)-1]=i;
}

char f2(char *str1, bool fl)
{
	while(fl);
	{
		fl=false;
		for(int a=0;a<=100;a++)
		{
			if(str1[0] == ' ')
			{
				for(int q=0;q<=strlen(str1);q++)
				{
					str1[q]=str1[q+1];
					fl=true;
				}
			}
		}
	}
}

main()
{
	char str[100];
	char str1[100];

	gets(str);
	gets(str1);

	char i;

	printf("simb=");
	scanf("%c",&i);

	bool fl;

	f1(str, i);
	f2(str1, fl);

	puts(str);
	puts(str1);
}