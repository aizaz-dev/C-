#include <iostream>
using namespace std;
int main()
{
	int i,user,digit;
	cin>>user;
	for(i=0;i<=6;i++)
	{
		digit=user%10;
		cout<<digit<<endl;
		user=user/10;
	}
	return 0;
}
