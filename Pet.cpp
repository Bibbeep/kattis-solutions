#include <iostream>
using namespace std;

int main(){
	int sum_max = 0, j = 0;
	
	for ( int i = 0; i < 5; i++)
	{
		int a, b, c, d, sum = 0;
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		
		if ( sum > sum_max)
		{
			sum_max = sum;
			j = i+1;
		}
	}
	
	cout << j << " " << sum_max << endl;
	
	return 0;
}
