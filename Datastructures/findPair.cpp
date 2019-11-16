
#include "stdafx.h"

#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

void pairForGivenSum(int arr[], int sum, int n)
{
	std::unordered_map<int, int> map;
	for (int i = 0;i < n;i++)
		map.insert(i, arr[i]);

	for (int i = 0;i < n;i++)
		if ((map.find(sum - arr[i]) != map.end()))
		{
			cout << "pair is found  " << map[sum - arr[i]] << "and" << i;
		}
		

}



int main()
{
	cout << "hello world";
	int sum;
	int arr[] = { 8,7,2,5,3,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << " Find a pair with given sum in the Array" << endl;
	cout << "size of array is" << n << endl;
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << endl;

	}
	cout << "sum =";
	cin >> sum;

	pairForGivenSum(arr, sum, n);

	getchar();
	return 0;
}

