#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int mod = m % n;
	
	for ( int i = 0; i < n; i++)
	{
		for (int j = m/n; j > 0; j--)
		{
			cout << '*';
		}
		
		if ( mod > 0)
		{
			cout << '*';
			mod--;
		}
		
		cout << endl;
	}
	
	return 0;
}
