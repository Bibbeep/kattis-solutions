#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char move[50];
    cin >> move;
    int pos = 1;
    int arrSize = strlen(move);
    /*cout << " init pos : " << pos << endl;
    cout << " arrsize = " << arrSize << endl;
    cout << move << endl;*/
    
    for ( int i = 0; i < arrSize; i++)
    {
        if ( move[i] == 'A')
        {
        	//cout << "A\t";
            if ( pos == 1)
            {
                pos = 2;
            }
            
            else if ( pos == 2) pos = 1;
        }
        
        else if ( move[i] == 'B')
        {
        	//cout << "B\t";
            if ( pos == 2)
            {
                pos = 3;
            }
            
            else if ( pos == 3) pos = 2;
        }
        
        else if ( move[i] == 'C')
        {
        	//cout << "C\t";
            if ( pos == 1)
            {
                pos = 3;
            }
            
            else if ( pos == 3) pos = 1;
        }
    	
	//cout << i +1 << " pos : " << pos << endl;
    }
    
    cout << pos << endl;
    return 0;
}
