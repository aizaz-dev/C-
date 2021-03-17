#include <iostream>
using namespace std;
int main()
{
	
	int month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int currentyear,preyear,premonth,currentmonth,currentday,preday,month1=0,month2=0,month3=0,actmonth,months,years;
	cout<<"Pre Year ";
	cin>>preyear;
	cout<<"Pre Month ";
	cin>>premonth;	
	cout<<"pre Day ";
	cin>>preday;
	cout<<"current Year ";
	cin>>currentyear;
	cout<<"current Month ";
	cin>>currentmonth;
	cout<<"Current Day ";
	cin>>currentday;
	
	//first part.............
	for(int i=premonth+1;i<=11;i++)
	{
		month1=month1+month[i];
	}
	month1=month1+(month[premonth-1]-preday);
	cout<<"part 1 "<<month1<<endl;
	
	//second part..............
	int z=0 ,az=0;
	for(int i=preyear;i<=currentyear-1;i++)
	{
		if(i%4==0)
		{
			month2=month2+366;
			z++;	
		}
		else
		{
			month2=month2+365;
			az++;
		}
		
	}
	cout<<"part 2 "<<month2<<endl;
	
	//3rd part.................
	for(int i=0;i<=currentmonth-1;i++)
	{
		month3=month3+month[i];
	}
	month3=month3+currentday;
	cout<<"part 3 "<<month3<<endl;
	
	//part 4 ..................
	int days;
	actmonth=month1+month2+month3+z;
	cout<<"I have farz remaining "<<actmonth*5<<endl;
	years=actmonth/365;
	cout<<"You are "<<years;
	months=(actmonth%365)/30;
	cout<<" years and "<<months;
	days=(actmonth%365)%30;
	cout<<" months and "<<days<<" days old";
	
	
	
	
	
	
	
	
	return 0;
}
