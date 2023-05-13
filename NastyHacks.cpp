#include <iostream>
using namespace std;

int revAds(int r, int e, int c){
	return (e-c)-r;
}

int main(){
	int n;
	cin >> n;
	
	for ( int i = 0; i < n; i++)
	{
		int r, e, c;
		cin >> r >> e >> c;
		
		if ( revAds(r, e, c) == 0)
			cout << "does not matter\n";
		else if ( revAds(r, e, c) < 0)
			cout << "do not advertise\n";
		else
			cout << "advertise\n";
	}
	return 0;
}
