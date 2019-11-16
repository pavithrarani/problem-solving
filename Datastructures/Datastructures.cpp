// Datastructures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>

using namespace std;

void sort(int a[], int n)
{
	//bubble sort my fav:

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;(j < n-1);j++)
		{
			if (a[j] > a[j+1])
			{
				//swap
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}

	}

	////shell sort:
	//for (int i = 0;i < n;i++)
	//{
	//	int min = a[i];
	//	int pos = 0;
	//	for (int j = i + 1; j <= n - 1;j++)
	//	{
	//	
	//	if (min > a[j])
	//	{
	//		pos = j;

	//	}
	//	
	//}
	//	//swap
	//	if (pos > 0)
	//	{

	//		int temp = a[i];
	//		a[i] = a[pos];
	//		a[pos] = temp;
	//	}
	//	
	//}
	
}


void pairForGivenSum(int arr[], int sum,int n)
{
	//main logic is here
	//sort array 1,2,3,5,7,9 
	sort(arr, n);
	int pair2, pos;
	
	for (int i = 0; i<n;i++)
	{
		int diff = sum - arr[i];
		pair2 = -1;

		for (int j = i+1;j < n;j++)
		{
			if (diff == arr[j])
			{
				pair2 = arr[j];  //found another pair
				pos = j;
			}
		}
		if (pair2 != -1)
			cout << "pair is  found at " <<i<<"and "<<pos<<":  "<< arr[i] <<"+"<< pair2 << endl;


	}

}
//int main()
//{
//	cout << "hello world";
//	int sum;
//	int arr[] = {8,7,2,5,3,1  };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	cout << " Find a pair with given sum in the Array" << endl;
//	cout << "size of array is" << n << endl;
//	for (int i = 0;i < n ;i++)
//	{
//		cout << arr[i] << endl;
//
//	}
//	cout << "sum =";
//	cin >> sum;
//
//	pairForGivenSum(arr,sum,n);
//
//	getchar();
//	return 0;
//}
//

