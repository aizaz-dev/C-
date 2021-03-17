#include <iostream>
using namespace std;
int main()
{
	int fact,x=1,y,i;
	cin>>fact;
	for(i=1;i<=fact;i++)
	{
		x=x*i;
		cout<<"factorial of "<<i<<" is "<<x<<endl;
	}
	return 0;
}
