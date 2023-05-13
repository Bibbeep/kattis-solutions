#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int count = 0;
    string s;
    getline(cin, s);
    
    for ( int i = 0; i < s.length(); i++)
    {
        if ( s[i] == 'a' || s[i] == 'A' || s[i] == 'i' || s[i] == 'I' || s[i] == 'u' || s[i] == 'U' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o' || s[i] == 'O')
            count++;
    }
    
    cout << count << endl;
    return 0;
}
