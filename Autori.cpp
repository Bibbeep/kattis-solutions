#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, str;
	cin >> s;
	
	for (auto x:s){
		if ( x == '-'){
			cout << str << endl;
			str.erase();
		}
		
		else str += x;
	}
	
	cout << str << endl;
	return 0;
}
