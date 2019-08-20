#include <iostream>
using namespace std;

int main() {
	string str,empty="";
	cin>>str;
	for(int i=str.length()-1;i>=0;i--)
	{
		empty=empty+str[i];
	}
	cout<<empty;
	return 0;
}
