#include <iostream>
using namespace std;
int main()
{
	int user,i,save,reminder,div,sum=0,n;
	cout<<"enter yhe length of number ";
	cin>>n;
	cout<<"enter number";
	cin>>user;
	save=user;
	for(i=1;i<=n;i++)
	{
	 	reminder=user%10;
	 	if(user%10!=0){
	 		sum=sum+reminder;
	 		
	 		
		 	}
	 	user=user/10;
	 	

	}
	cout<<"sum   "<<sum<<endl;
	return 0;
}
