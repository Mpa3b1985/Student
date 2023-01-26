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

	int arr[SIZE];
	int arr2[SIZE2];

	farray(arr,SIZE);
	farray(arr2,SIZE2);
}

//решение из интернета

#include<iostream>
#include<time.h>
using namespace std;


void farray(int arr[], const int size)
{
	for(int i=0;i<size;i++)
	{
		arr[i]=rand() % 10;
	}
}

void parray(int arr[], const int size)
{
	for(int i=0;i<size;i++)
	{
		cout << arr[i] << endl;
	}
}

main()
{
	const int SIZE=10;
	const int SIZE2=15;

	int arr[SIZE];
	int arr2[SIZE2];

	farray(arr,SIZE);
	parray(arr,SIZE);

	farray(arr2,SIZE2);
	parray(arr2,SIZE2);
}