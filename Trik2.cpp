#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[50];
	cin >> s;
	short a = 1, b = 0, c = 0;
	short t;
	int arrSize = strlen(s);
	
	for ( int i = 0; i < arrSize; i++)
	{
		if ( s[i] == 'A')
		{
			t = a;
			a = b;
			b = t;
		}
		
		else if ( s[i] == 'B')
		{
			t = b;
			b = c;
			c = t;
		}
		
		else if ( s[i] == 'C')
		{
			t = a;
			a = c;
			c = t;
		}
	}
	
	if ( a == 1) cout << 1 << endl;
	else if ( b == 1) cout << 2 << endl;
	else if ( c == 1) cout << 3 << endl;
	
	return 0;
}
