#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

int convert ( int num){
	int count = 0;
	int sum = 0;
	queue<int> binary;
	
	if ( num == 1)
		binary.push(1);
	else if ( num == 0)
		binary.push(0);
	else
		while( num != 1)
		{
			binary.push(num%2); //1 0 1 
			count++;			//1 2 3
			num = num/2;		//6 3 1
		
			if ( num == 1)
				binary.push(1); //1 0 1 1
		}
	
	while (!binary.empty())
	{
		sum+=pow(2, count)*binary.front();
		binary.pop();
		count--;
	}
	
	return sum;
}

int main(){
	int n;
	cin >> n;
	
	cout << convert(n) << endl;
	return 0;
}
