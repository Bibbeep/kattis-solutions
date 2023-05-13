#include <iostream>
using namespace std;

bool checkOp(double a, double b, double c){
	if ( a + b == c) return true;
	else if ( a - b == c) return true;
	else if ( b - a == c) return true;
	else if ( a * b == c) return true;
	else if ( a / b == c) return true;
	else if ( b / a == c) return true;
	else return false;
}

int main(){
	int n;
	cin >> n;
	
	for ( int i = 0; i < n; i++)
	{
		double a, b, c;
		cin >> a >> b >> c;
		if ( checkOp(a, b, c) == true) cout << "Possible\n";
		else cout << "Impossible\n";
	}
	
	return 0;
}
