#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char binary[100],onescomp[100];
	int count,error=0,range;
	cin>>binary;
	range =strlen(binary);
	for(count=0;count<range;count++)
	{
		if(binary[count]=='1')
		{
			onescomp[count]='0';
		}
		else if(binary[count]=='0')
		{
			onescomp[count]='1';
		}
		else
		{
			cout<<"error";
		}
	}
	onescomp[range]='\0';
	
	cout<<onescomp;
	return 0;
}
