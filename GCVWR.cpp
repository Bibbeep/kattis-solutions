#include <bits/stdc++.h>
using namespace std;

int main()
{
	int G, T, N, goods = 0, weight;
	cin >> G >> T >> N;
	weight = G - T;
	
	for ( int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		goods += tmp;
	}
		
	cout << (0.9*weight) - goods;
		
	cout << endl;
	return 0;
}
