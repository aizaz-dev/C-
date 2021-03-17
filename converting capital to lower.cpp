#include <iostream>
#define print cout
using namespace std;
int main()
{
	char ch;
	int n;
	cin>>ch;
	n=ch;
	if(ch>=65&&ch<=90)
	ch=ch+32;
	print<<ch;
}
