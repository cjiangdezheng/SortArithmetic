// Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

/** 
 * 直接插入排序的一般形式 
 * 
 * @param int dk 缩小增量，如果是直接插入排序，dk=1 
 * 
 */  
 /*
void ShellInsertSort(int a[], int n, int dk)  
{  
    for(int i= dk; i<n; ++i)
	{  
        if(a[i] < a[i-dk])
		{          //若第i个元素大于i-1元素，直接插入。小于的话，移动有序表后插入  
            int j = i-dk;     
            int x = a[i];           //复制为哨兵，即存储待排序元素  
            a[i] = a[i-dk];         //首先后移一个元素  
            while(x < a[j] && j >=0)
			{     //查找在有序表的插入位置  
                a[j+dk] = a[j];  
                j -= dk;             //元素后移  
            }  
            a[j+dk] = x;            //插入到正确位置  
        }  
		//cout << "-------" << dk << endl;
        print(a, n,i );  
		
    }  
      
}  */
/***********************************************************************
//
//  Shell Sort
//
***********************************************************************/
void Shell_Short(int a[], int len)
{
	int dk = len / 2;
	int lin = 0;
	int key = 0;
	while (dk >0)
	{
		for (int i = dk; i < len; i++)
		{
			if (a[i] < a[i - dk])
			{
				lin = i - dk;
				key = a[i];
				a[i] = a[i - dk];
				while (a[lin] > key && lin >= 0)
				{
					a[lin + dk] = a[lin];
					lin -= dk;
				}
				a[lin + dk] = key;
			}
		}
		dk /= 2;
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
	
	Shell_Short(a, length );
	
	cout << "排序后：" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}

