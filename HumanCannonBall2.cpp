#include <iostream>
#include <cmath>
using namespace std;

void pos( float v0, float x1, float angle, float h1, float h2)
{
	float g = 9.81;
	float rad = angle*M_PI/180;
    float t = x1/(v0*cos(rad));
    float y = (v0*t*sin(rad)) - ((g/2)*t*t);
    
   //cout << "( t = " << t << ", y = " << y << "), ( " << h1 << ", " << h2 << ") = ";
    
    if ( y > h1 + 1 && y < h2 - 1) cout << "Safe" << endl;
    else cout << "Not Safe" << endl;
}

int main()
{
    short n;
    float x1, h1, h2, v0, angle, t;
    cin >> n;
    
    for ( int i = 0; i < n; i++)
    {
        cin >> v0 >> angle >> x1 >> h1 >> h2;
        pos( v0, x1, angle, h1, h2);
    }
    
    return 0;
}
