#include <iostream>
using namespace std;

int main() {
	float t,e,m,s,ss;
	cin>>t>>e>>m>>s>>ss;
	float total,avg,percentage;
	total=t+e+m+s+ss;
	avg=total/5.0;
	percentage=(total/5.0)*100;
	cout<<total<<" "<<avg<<" "<<percentage;
	return 0;
}
