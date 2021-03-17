#include <iostream>
using namespace std;
int main()
{
	int x=1,y=2,sum;
	for(int i=0;i<=10;i++)
	{
		cout<<x<<endl;
		sum=x+y;
		x=y;
		y=sum;
	}
	return 0;
}
