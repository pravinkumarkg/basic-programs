#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c)
	{
		if((b+c)>a)
		{
			if((a+c)>b)
			{
				cout<<"valid";
			}
			else
			{
				cout<<"invalid";
			}
		}
		else
		{
			cout<<"inavlid";
		}
	}
	else
	{
		cout<<"invalid";
	}
	return 0;
}
