#include <iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
		cout<<"alphabet";
	}
	else if(ch>=48&&ch<=57)
	{
		cout<<"digit";
	}
	else
	{
		cout<<"special character";
	}
	return 0;
}
