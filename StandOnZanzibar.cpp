#include <iostream>
using namespace std;

int main()
{
	int n, a, b, imigran;
	cin >> n;
	
	for ( int i = 0; i < n; i++)
	{
		imigran = 0;
		cin >> a;
		while ( cin >> b, b != 0)
		{
			if ( b > 2*a) imigran += b-2*a;
			
			a = b;
		}
		
		cout << imigran << endl;
	}
}
