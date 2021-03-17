#include <iostream>
using namespace std;
int main()
{
	int x,i,count=0,sum,max=0,min,f=0;
	double avg;
	
	for(i=0;true;i++)
	{
		cin>>x;
		if(x==-1)
		{
			break;
		}
		else
		{
			sum=sum+x;
			count+=1;
			if(x>max)
			{
				max=x;
			}
			if(x<min)
			{
				min=x;
			}
		}
		
		
	}
	avg=sum/count;
	cout<<"You entered "<<count<<" numbers"<<endl;
	cout<<"Average of those numbers is "<<avg<<endl;
	cout<<"maximum number "<<max<<endl;
	cout<<"minimum number "<<min<<endl;
	return 0;
}
