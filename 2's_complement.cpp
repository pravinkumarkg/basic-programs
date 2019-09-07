#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char binary[100],onescomp[100],twoscomp[100];
	int count,error=0,range,carry=1;
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
	for(count=range-1;count>=0;count--)
	{
		if(onescomp[count]=='1'&&carry==1)
		{
			twoscomp[count]='0';
		}
		else if(onescomp[count]=='0'&&carry==1)
		{
			twoscomp[count]='1';
			carry=0;
		}
		else
		{
			onescomp[count]=twoscomp[count];
		}
	}
	twoscomp[range]='\0';
	cout<<onescomp<<endl<<twoscomp;
	return 0;
}#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char binary[100],onescomp[100],twoscomp[100];
	int count,error=0,range,carry=1;
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
	for(count=range-1;count>=0;count--)
	{
		if(onescomp[count]=='1'&&carry==1)
		{
			twoscomp[count]='0';
		}
		else if(onescomp[count]=='0'&&carry==1)
		{
			twoscomp[count]='1';
			carry=0;
		}
		else
		{
			onescomp[count]=twoscomp[count];
		}
	}
	twoscomp[range]='\0';
	cout<<onescomp<<endl<<twoscomp;
	return 0;
}
