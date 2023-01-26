#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void farray(int *arr, size_t size)
{
	srand(time(NULL));

	for(int i=0;i<size;i++)
	{
		arr[i]=rand() % 10;
	}
}

int main()
{
	int SIZE=10;
	int SIZE2=15;

	srand(time(NULL));

	int arr[SIZE];
	int arr2[SIZE2];

	farray(arr,SIZE);
	farray(arr2,SIZE2);
}