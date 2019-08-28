#include <iostream>
using namespace std;

int main() {
	int amt;
	cin>>amt;
	int n500,n100,n50,n20,n10,n5,n2,n1;
	n500=n100=n50=n20=n10=n5=n2=n1=0;
	if(amt>=500)
	{
		n500=amt/500;
		amt-=n500*500;
	}
	if(amt>=100)
	{
		n100=amt/100;
		amt-=n100*100;
	}
	if(amt>=50)
	{
		n50=amt/50;
		amt-=n50*50;
	}
		if(amt>=20)
	{
		n20=amt/20;
		amt-=n20*20;
	}
		if(amt>=10)
	{
		n10=amt/10;
		amt-=n10*10;
	}
		if(amt>=5)
	{
		n5=amt/5;
		amt-=n5*5;
	}
		if(amt>=2)
	{
		n2=amt/2;
		amt-=n2*2;
	}
		if(amt>=1)
	{
		n1=amt;
	}
	cout<<n500<<" "<<n100<<" "<<n50<<" "<<n20<<" "<<" "<<n10<<" "<<n5<<" "<<n2<<" "<<n1;
	
	return 0;
}
