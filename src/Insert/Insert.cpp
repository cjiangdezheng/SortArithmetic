// Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

void InsertSort(int a[], int n)  
{  
    for(int i= 1; i<n; i++)
	{  
        if(a[i] < a[i-1])
		{               //若第i个元素大于i-1元素，直接插入。小于的话，移动有序表后插入  
            int j= i-1;   
            int x = a[i];        //复制为哨兵，即存储待排序元素  
            a[i] = a[i-1];           //先后移一个元素  
            while(x < a[j])
			{  //查找在有序表的插入位置  
                a[j+1] = a[j];  
                j--;         //元素后移  
            }  
            a[j+1] = x;      //插入到正确位置  
        }  
        //print(a,n,i);           //打印每趟排序的结果  
    }  
	
}
/***********************************************************************
//
//  Insert 
//
***********************************************************************/
void Insert(int a[],int len)
{
	int lin = 0;
	int key = 0;
	for (int i = 1; i < len; i++)
	{
		if (a[i] < a[i - 1])
		{
			lin = i - 1;
			key = a[i];
			a[i] = a[i - 1];
			while (a[lin]>key && lin >= 0)
			{
				a[lin + 1] = a[lin];
				lin -= 1;
			}
			a[lin + 1] = key;
		}
	}
}

int main(int argc, char* argv[])
{
	int a[] = { 7,6,3,9,5,1,2,8,4,10 };
	int length = sizeof(a) / sizeof(a[0]);
	int i = 0;
	cout << "排序前：" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	Insert(a, length );
	
	cout << "排序后：" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}

