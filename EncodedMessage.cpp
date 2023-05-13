#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void decode(string msg){
	int lenSide = sqrt(msg.length());
	char letters[lenSide][lenSide];
	int k = 0;
	
	for ( int i = 0; i < lenSide; i++){
		for ( int j = 0; j < lenSide; j++){
			letters[i][j] = msg[k];
			k++;
		}
	}
	
	
	for ( int x = lenSide-1; x >= 0; x--){
		for ( int y = 0; y < lenSide; y++){
			cout << letters[y][x];
		}
	}
	
	cout << endl;
	
	
	/*
	for ( int i = 0; i < lenSide; i++){
		for ( int j = 0; j < lenSide; j++){
			cout << letters[i][j] << "  ";
		}
		cout << endl;
	}
	*/
	
}

int main(){
	int n;
	cin >> n;
	
	for ( int i = 0; i < n; i++){
		string msg;
		cin >> msg;
		decode(msg);
	}
	
	return 0;
}
