#include<stdio.h>

main()

{
	int num,t,sum;
    printf("how many numbers? ");
    scanf("%i",&num);
    for(int i=1;i<=num;i=i+1)
	{
		printf("enter the number %i - ",i);
		scanf("%i",&t);
		sum=sum+t;
	}
	printf("sum of all numbers %i \n",sum);
	printf("average %i ",sum/num);
}