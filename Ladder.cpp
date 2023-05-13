#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int h;
	double v;
	cin >> h >> v;
	cout << h + ceil(cos(v*M_PI/180)) << endl;
	return 0;
}
