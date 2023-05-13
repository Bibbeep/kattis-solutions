#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double c, sum = 0;
    int l;
    cin >> c >> l;
    
    for ( int i = 0; i < l; i++)
    {
        double wid, len;
        cin >> wid >> len;
        sum+=c*(wid*len);
    }
    
    cout << setprecision(7) << fixed << sum << endl;
    return 0;
}
