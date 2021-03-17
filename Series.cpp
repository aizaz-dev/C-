#include <iostream>
using namespace std;
int main()
{
	int i,even=2,odd=1;
	cout<<"EVEN NUMBERS\t ODD NUMBERS\t SQUARES"<<endl;
	for(i=1;i<=25;i++){
		cout<<even<<"\t\t\t"<<odd<<"\t\t"<<i*i<<endl;
		even=even+2;
		odd=odd+2;
	}
	return 0;
}




//	int x=1,y=2,i;
//	cout<<"PRIME NUMBERS"<<endl<<x<<endl<<y<<endl;
//	for(i=3;i<=50;i++)
//	{
//		if(i%2!=0)
//		{
//			cout<<i<<endl;
//		}
//	}
//return 0;




//
//#include <iostream>
//using namespace std;
//int main(){
//	int x=0,y,i;
//	cout<<"SERIES OF EVEN NUMBERS"<<endl;
//	for(i=0;i<50;i++)
//	{
//		cout<<x;
//		x=x+2;
//		if(x>50)
//		break;
//	}
//}
//
//
//
//
//
//	int x=1,y,i;
//	cout<<"SERIES OF ODD NUMBERS"<<endl;
//	for(i=0;i<50;i++)
//	{
//		cout<<x<<endl;
//		x=x+2;
//		if(x>50)
//		break;
//	}
//	return 0;
//}
//
//
//
//
//
//
//	int x,y,i;
//	cout<<"NUMBERS\t\t\t"<<"SQUARES"<<endl;
//	for(i=1;i<=50;i++)
//	{
//		cout<<i<<"\t\t\t"<<i*i<<endl;
//	}
//
//
//
//
//

