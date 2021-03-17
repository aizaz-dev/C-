#include <iostream>
using namespace std;
int main()
{
	int arr[] = {2, 9, 6, 4, 90, 87, 56, 78};
	int order[] = {};
	//	int n=sizeof(arr) / sizeof(arr[0]);
	int f;
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] = order[i];
				f = arr[i];
			}
		}
	}
	return 0;
}
