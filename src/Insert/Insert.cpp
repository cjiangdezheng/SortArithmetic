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
		{               //����i��Ԫ�ش���i-1Ԫ�أ�ֱ�Ӳ��롣С�ڵĻ����ƶ����������  
            int j= i-1;   
            int x = a[i];        //����Ϊ�ڱ������洢������Ԫ��  
            a[i] = a[i-1];           //�Ⱥ���һ��Ԫ��  
            while(x < a[j])
			{  //�����������Ĳ���λ��  
                a[j+1] = a[j];  
                j--;         //Ԫ�غ���  
            }  
            a[j+1] = x;      //���뵽��ȷλ��  
        }  
        //print(a,n,i);           //��ӡÿ������Ľ��  
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
	cout << "����ǰ��" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	Insert(a, length );
	
	cout << "�����" << endl;
	for ( i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}

