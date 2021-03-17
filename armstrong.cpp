#include <iostream>
using namespace std;
int main()
{
	int arm,i,x,sum=0,az;
	cin>>arm;
	az=arm;
	for(i=0;i<=100;i++)
	{
		x=arm%10;
		if(arm%10!=0)
		{
			cout<<x<<endl;
			sum=sum+(x*x*x);
		}
	arm=arm/10;
		
	}
	if(sum==az)
	cout<<"armstrong number";
	
}
