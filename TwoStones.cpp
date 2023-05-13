#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    
    for ( int i = 1; i <= n; i++)
    {
        count++;
    }
    
    if ( count % 2 == 0) cout << "Bob";
    else cout << "Alice";
    
    cout << endl;
    return 0;
}
