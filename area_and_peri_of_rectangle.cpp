#include <iostream>
using namespace std;

int main() {
	int area,perimeter,length,breadth;
	cin>>length>>breadth;
	area=length*breadth;
	perimeter=2*(length+breadth);
	cout<<area<<" "<<perimeter;
	return 0;
}
