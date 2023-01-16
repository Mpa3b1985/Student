#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main()
{
    int mas[100][100];
    int n,m;

    printf("n=");
    scanf("%d",&n);

    printf("m=");
    scanf("%d",&m);

    srand(time(NULL));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mas[i][j]=rand()%10;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%3d",mas[i][j]);
        }
        printf("\n\n");
    }

	bool fl;

	while(fl);
	{
		fl=false;
	   	for(int i=0;i<n;i++)
	    {
		    for(int t=0;t<m;t++)
		    {
			    for(int j=0;j<m-1;j++)
			    {
			    	if(mas[i][j]>mas[i][j+1])
			    	{
			    		int q=mas[i][j];
			    		mas[i][j]=mas[i][j+1];
			    		mas[i][j+1]=q;
			    		fl=true;
			        }
				}
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for (int j=0;j<m-1;j++)
		{
			int z=mas[i][j];
			mas[i][j]=mas[i][j+1];
			mas[i][j+1]=z;
		}
	}

    printf("\n\n\n\n");
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%3d",mas[i][j]);
        }
        printf("\n\n");
    }

}