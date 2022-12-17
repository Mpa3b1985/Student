#include<stdio.h>

main()

{
	int num,t,sum,s,h,min,max;
    printf("how many numbers? ");
    scanf("%i",&num);
    if(s==0)
    {
    	min=t;
	}
	if(h==0)
	{
		max=t;
	}
    for(int i=1;i<=num;i=i+1)
	{
		printf("enter the number %i - ",i);
		scanf("%i",&t);
		sum=sum+t;
		if(min>t)
		{
			min=t;
		}
		if(max<t)
		{
			max=t;
		}
	}
	printf("sum of all numbers %i \n",sum);
	printf("average %i \n",sum/num);
	printf("min %i \n",min);
	printf("max %i \n",max);
}