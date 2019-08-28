#include <iostream>
using namespace std;

int main() {
	int d,w,y;
	cin>>d;
	y=d/365;
	d=d%365;
	w=d/7;
	d=d%7;
	cout<<d<<" "<<w<<" "<<y;
	return 0;
}
