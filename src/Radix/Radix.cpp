// Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

/***********************************************************************
//
//    Radix
//
***********************************************************************/
int Max(int a[], int n)
{
	int MaxValue = a[0];
	for (int i = 1; i < n; i++)
	{
		if (MaxValue < a[i])
			MaxValue = a[i];
	}
	return MaxValue;
}
int GetLoop(int max)
{
	int count = 1;
	max /= 10;
	while (max != 0)
	{
		count++;
		max /= 10;
	}
	return count;
}
void Radix(int a[], int len, int loop)
{
	int buckets[10][20] = { 0 };
	int tmp = pow(10, loop - 1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int row_index = (a[i] / tmp) % 10;
		for (int j = 0; j < 20; j++)
		{
			if (buckets[row_index][j] == NULL)
			{
				buckets[row_index][j] = a[i];
				break;
			}
		}
	}
	int k = 0;
	for (i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (buckets[i][j] != NULL)
			{
				a[k++] = buckets[i][j];
				buckets[i][j] = NULL;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}
void Radix_Sort(int a[], int n)
{
	int MaxValue = Max(a, n);
	int loop = GetLoop(MaxValue);
	for (int i = 1; i <= loop; i++)
	{
		Radix(a, n, i);
	}
}

int main(int argc, char* argv[])
{
	int a[] = { 7,6,3,9,5,1,2,8,4,10 };
	int length = sizeof(a) / sizeof(a[0]);
	int i = 0;
	cout << "ÅÅÐòÇ°£º" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	Radix_Sort(a,length);
	
	cout << "ÅÅÐòºó£º" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}

