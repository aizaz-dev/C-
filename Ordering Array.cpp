#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x=6;
	int l[]={40,6,2,1,3};
	int n=sizeof(l) / sizeof(l[0]);
	sort(l,l+n);
	for(int i=0;i<n;i++)
	{
		cout<<l[i]<<" ";
	}
	return 0;
}
