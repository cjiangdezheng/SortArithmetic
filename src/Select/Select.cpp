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
//  Select Sort
//
***********************************************************************/
int Min(int a[], int len, int index)
{
	int ret = index;
	for (int i = index + 1; i < len; i++)
	{
		if (a[ret] > a[i])
			ret = i;
	}
	return ret;
}
void Select_Sort(int a[], int len)
{
	int ret = 0;
	for (int i = 0; i < len; i++)
	{
		ret = Min(a, len, i);
		if (ret != i)
		{
			int tmp = a[ret];
			a[ret] = a[i];
			a[i] = tmp;
		}
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
	
	Select_Sort(a, length );
	
	cout << "ÅÅÐòºó£º" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}

