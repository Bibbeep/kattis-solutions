#include <iostream>
#include <cctype>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){
    double ws = 0, lc = 0, uc = 0, sy = 0;
    string s;
    cin >> s;
    int size = s.length();
    
    for ( int i = 0; i < size; i++)
    {
        if ( s[i] == 95) ws++;
        else if ( islower(s[i])) lc++;
        else if ( isupper(s[i])) uc++;
        else sy++;
    }
    
    cout << setprecision(15) << ws/size << endl;
    cout << lc/size << endl;
    cout << uc/size << endl;
    cout << sy/size << endl;
    
    //printf("%.10f\n%.10f\n%.10f\n%.10f\n", (double)ws/size,(double)lc/size,(double)uc/size,(double)sy/size);
    return 0;
}
