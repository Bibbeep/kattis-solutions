#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, temp_a = 0, temp_b = 0;
	cin >> a >> b;
	
	for ( int i = 0; i < 3; i++)
	{
		int temp = 0;
		temp += a % 10;
		a = a - ( a % 10);
		a = a / 10;
		temp_a += temp * ( pow (10, 2-i));
	}
	
	/*	1 : temp = 4, a = 73, temp2 = 400
		2 : temp = 3, a = 7, temp2 = 430
		3 : temp = 0, a = 0.7, temp2 = 437
	*/
		for ( int i = 0; i < 3; i++)
	{
		int temp = 0;
		temp += b % 10;
		b = b - ( b % 10);
		b = b / 10;
		temp_b += temp * ( pow (10, 2-i));
	}
	
	a = temp_a; b = temp_b;
	
	cout << max ( a, b);
	cout << endl;
	return 0;
}
