#include <iostream>
using namespace std;

int main()
{
    int n, vol = 7;
    cin >> n;
    
    for ( int i = 0; i <= n; i++)
    {
		string command;
        getline ( cin, command);
        if ( command == "Skru op!" && vol < 10) vol++;
        else if ( command == "Skru ned!" && vol > 0) vol--;
    }
    
    cout << vol << endl;
    return 0;
}
