#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, size = 0;
	cin >> n;
	string rank, uni;
	string list[12], un[12] = {""};
	
	for(int i = 0; i < n; i++)
	{
		cin >> uni >> rank;
		
		for(int j = 0; j <= size; j++)
		{
			if( un[j] == uni) break;
			else if( j == size)
			{
				un[j] = uni;
				cout << uni << " " << rank << endl;
				size++;
				break;
			}
		}
		
		if ( size == 12) break;
	}
	
	return 0;
}
