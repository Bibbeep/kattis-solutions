#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;
    int p[n];
    int remaining_x = 0;
    
    for ( int i = 0; i < n; i++)
    {
        cin >> p[i];
        remaining_x += x;
    }
    
    for ( int i = 0; i < n; i++)
    {
        remaining_x -= p[i];
    }
    
    cout << remaining_x + x;
    return 0;
}
