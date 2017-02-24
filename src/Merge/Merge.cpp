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
//  Merge Sort
//
***********************************************************************/
void Merge(int Source[], int Tmp[], int begin, int mid, int end)
{
	int i = begin;
	int j = mid + 1;
	int k = begin;
	while (i != mid+1 && j != end +1)
	{
		if (Source[i] > Source[j])
			Tmp[k++] = Source[j++];
		else
			Tmp[k++] = Source[i++];
	}
	while (i != mid + 1)
	{
		Tmp[k++] = Source[i++];
	}
	while (j != end + 1)
	{
		Tmp[k++] = Source[j++];
	}
	for (i = begin; i <= end; i++)
		Source[i] = Tmp[i];
}
void Merge_Sort(int Source[],int Tmp[],int begin,int end)
{
	int mid = 0;
	if (begin < end)
	{
		mid = (begin + end) / 2;
		Merge_Sort(Source,Tmp, begin, mid);
		Merge_Sort(Source,Tmp, mid + 1, end);
		Merge(Source, Tmp, begin, mid, end);
	}
}

int main(int argc, char* argv[])
{
	int a[] = { 7,6,3,9,5,1,2,8,4,10 };
	int b[10] = {0};
	int length = sizeof(a) / sizeof(a[0]);
	int i = 0;
	cout << "ÅÅÐòÇ°£º" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	Merge_Sort(a,b, 0, length-1);
	
	cout << "ÅÅÐòºó£º" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}

