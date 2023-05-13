#include <cstdio>
using namespace std;

int main()
{
	int count = 0;
    scanf("%d", &count); //%d for int, %f for float, %c for char, %s char strings
    
    if ( count >= 1 && count <= 100)
    {
	
    	for ( int i = 0; i < count; i++)
    	{
    		printf("%d", i+1);
        	printf(" Abracadabra\n");
    	}
    }
    
    return 0;
}
