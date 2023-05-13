#include <iostream>
using namespace std;

int main()
{
    int n = 0, N, li, sum_l = 0;
    
    cin >> N;
    
    while ( n < N)
    {
        cin >> li;
        sum_l += li;
        n++;
        
        if ( n >= 2)
        {
        	sum_l--;
		}
    }
    
    cout << sum_l;
}
