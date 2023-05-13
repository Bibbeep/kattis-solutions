#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int h, k, v, s;
	cin >> h >> k >> v >> s;
	
	while ( h > 0)
	{
		v+=s; //v = 2
		v-=round(v/10); //v = 2
		
		if ( h >= k)
			h++; //h = 2
			
		if ( v > 0 && v < k)
		{
			h--; //h = 2
			if ( h == 0)
				v = 0;
		}
		
		if ( v <= 0)
		{
			h = 0;
			v = 0;
		}
		
		if ( s > 0)
			s--;
	}
	
	cout << v << endl;
	return 0;
}
