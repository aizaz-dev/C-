#include <iostream>
using namespace std;
int main()
{
	int temp, median, n, avg, m1, m2, sum = 0;
	double mean;
	cout << "\tEnter length of Array    ";
	cin >> n;
	int z = n - 1;
	int arr[z] = {};

	//	Takking Array as input froum User

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//							Finding Mean							 //

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	mean = sum / n;
	cout << "\n\t Mean : " << mean;

	//							Findding Median                          //

	//		Sorting Array

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//	Printing Sorted Array

	cout << "\nData after sorting: ";
	for (int j = 0; j < n; j++)
	{

		cout << arr[j] << "  ";
	}

	//	Finding the Middle Numbers as M1 and M2
	if (n % 2 != 0)
	{
		median = n / 2;
		cout << "\n\tMedian Odd : " << arr[median];
	}
	else
	{
		m2 = n / 2;
		m1 = (n / 2) - 1;
		cout << "\n\t M1 : " << arr[m1] << "  M2 : " << arr[m2] << "\n\tMedian " << (arr[m1] + arr[m2]) / 2;
	}

	return 0;
}
