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

    for(int j=0;j<m;j++)
    {
	    for(int t=0;t<n;t++)
	    {
		    for(int i=0;i<n-1;i++)
		    {
		    	if(mas[i][j]>mas[i+1][j])
		    	{
		    		int q=mas[i][j];
		    		mas[i][j]=mas[i+1][j];
		    		mas[i+1][j]=q;
				}
			}
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