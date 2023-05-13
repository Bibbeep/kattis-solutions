#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int iteration ( int N){
    int row = 2;
    for ( int i = 1; i <= N; i++)
    {
        row = (row*2) - 1;
    }
    return pow ( row, 2);
}

int main(){
    int N;
	unsigned long long int points;
    cin >> N;
    
    points = iteration(N);
    cout << points << endl;
    return 0;
}
