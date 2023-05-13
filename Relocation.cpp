#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for ( int i = 0; i < q; i++)
    {
        int req = 0, j = 0, k = 0;
        cin >> req >> j >> k;
        
        if ( req == 1)
        {
            arr[j-1] = k;
        }
        
        if ( req == 2)
        {
            cout << abs(arr[j-1] - arr[k-1]) << endl;
        }
    }
    
    return 0;
}
