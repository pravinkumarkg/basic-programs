#include <iostream>
using namespace std;

int main() {
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	int sum;
	sum=a1+a2+a3;
	if(sum==180&&a1!=0&&a2!=0&&a3!=0)
	{
		cout<<"valid triangle";
	}
	else
	{
		cout<<"invalid triangle";
	}
	return 0;
}
