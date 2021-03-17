#include <iostream>
using namespace std;
int main(){
	char grade[]={'A','B','C','D','F','F','F','F','F'};
	float gradepoint[]={4.00,3.00,2.00,1.00,0.00,0.00,0.00,0.00,0.00};
	int marks,x=80,i;
	cout<<"ENTER YOUR MARKS  ";
	cin>>marks;

	for(i=0; i<=7; i++)
	{
		if(marks>=x)
		{
			cout<<"YOUR GRADE IS "<<grade[i]<<" AND YOUR GRADEPOINT IS "<<gradepoint[i];
			break;
		}
		else
		{
			x=x-10;
		}
	}
	return 0;
}







//#include <iostream>
//using namespace std;
//int main(){
//	char grade[]={'A','B','C','D','F'};
//	float gradepoint[]={4.00,3.00,2.00,1.00,0.00};
//	int marks,i;
//	cout<<"ENTER YOUR MARKS  ";
//	cin>>marks;
//	if((marks>=80)&&(marks<=100))
//	cout<<"YOUR GRADE IS "<<grade[0]<<" AND YOUR GRADEPOINT IS "<<gradepoint[0];
//	else if((marks>=70)&&(marks<=79))
//	cout<<"YOUR GRADE IS "<<grade[1]<<" AND YOUR GRADEPOINT IS "<<gradepoint[1];
//	else if((marks>=60)&&(marks<=69))
//	cout<<"YOUR GRADE IS "<<grade[2]<<" AND YOUR GRADEPOINT IS "<<gradepoint[2];
//	else if((marks>=50)&&(marks<=59))
//	cout<<"YOUR GRADE IS "<<grade[3]<<" AND YOUR GRADEPOINT IS "<<gradepoint[3];
//	else if((marks>=0)&&(marks<=49))
//	cout<<"YOUR GRADE IS "<<grade[4]<<" AND YOUR GRADEPOINT IS "<<gradepoint[4];
//	else
//	cout<<"YOU ENTERED WRONG VALUE";
//	return 0;
//}
