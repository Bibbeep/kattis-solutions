#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0; //number of lectures attended
    int cup = 0; //number of coffee cup(s) on hand
    
    for ( int i = 0; i < n; i++)
    {
        if ( cup > 2) cup = 2;
        if ( s[i] == '0' && cup > 0)
        {
            count++;
            cup--;
        }
        
        if ( s[i] == '1')
        {
            count++;
            cup+=2;
        }
    }
    
    cout << count << endl;
    return 0;
}
