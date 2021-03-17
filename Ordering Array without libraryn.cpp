#include <iostream>
using namespace std;
int main()
{
	int arr[]={2,9,6,4,8};
	int order[]={};
	int n=sizeof(arr) / sizeof(arr[0]);
	int f=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>f)
		{
			arr[i]=order[i];
			f=arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<order[i];
	}
	return 0;
}
