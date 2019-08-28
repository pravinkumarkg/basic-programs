#include <iostream>
using namespace std;

int main() {
	int radius;
	float diameter,circumference,area;
	float pi=3.14;
	cin>>radius;
	diameter=2*radius;
	circumference=2*pi*radius;
	area=pi*radius*radius;
	cout<<diameter<<" "<<circumference<<" "<<area;
	
	return 0;
}
