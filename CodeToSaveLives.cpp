#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(80,'\n');
    string num;
    string num2;
    
    for ( int i = 0; i < t; i++)
    {
        string num_temp, num2_temp;
		getline(cin, num);
        getline(cin, num2);
        //cout << num << endl << num2 << endl;
        for ( int j = 0; j < num.length(); j++)
        {
            if ( num[j] != ' ')
            {
                num_temp+=num[j];
            }
        }
        
        for ( int j = 0; j < num2.length(); j++)
        {
            if ( num2[j] != ' ')
            {
                num2_temp+= num2[j];
            }
        }
        //cout << num_temp << endl << num2_temp << endl;
        int sum = stoi(num_temp) + stoi(num2_temp);
        string sum_num = to_string(sum);
        //cout << sum_num << endl;
        
        for ( int m = 0; m < sum_num.length(); m++)
        {
            if ( m != sum_num.length() - 1)
            {
                cout << sum_num[m] << " ";
            }
            else cout << sum_num[m] << endl;
        }
    }
    return 0;
}
