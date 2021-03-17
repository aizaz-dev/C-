#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;
int main()
{
	int random,x;
	srand(time(NULL));
	random=rand() % 30 + 20;
	cout<<random<<endl;
	for(int i=1;true;i++)
	{
		cin>>x;
		if(x==random)
		{
			cout<<"Congrats ";
			break;
		}
		else
		{
			cout<<"Not your Number ";
		}
	}
}

