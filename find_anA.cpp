#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cin >> word;
	char a = 'a';
	int pos = 0;
	
	for ( int i = 0; i < word.length(); i++)
	{
		if ( word[i] == a)
		{
			word = word.erase(0, i);
			break;
		}
	}
	
	cout << word;
	return 0;
}
