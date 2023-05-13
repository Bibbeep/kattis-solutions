#include <iostream>
using namespace std;

int main(){
	int n;
	double count = 0, sum = 0;
	cin >> n;
	
	for ( int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		
		if ( k != -1)
		{
			count++;
			sum+=k;
		}
	}
	
	cout << sum/count << endl;
	return 0;
}
