#include <iostream>
#include <string>
#include <vector>
using namespace std;

void decoder( string s, string num){
    vector <char> text;
    int n = num.size();
    //cout << n << endl;
    for ( int i = 0; i < n/3; i ++){
        int id = stoi(num.substr(0,3));
        /*cout << id << " ";
        cout << s.at(id-1) << " ";
        cout << num << endl;*/
        text.push_back(s[id-1]);
        num.erase(0,3);
    }
    
    for ( int i = 0; i < text.size(); i++) cout << text[i];
}

int main(){
    string s;
    string num;
    cin >> s;
    cin >> num;
    
    decoder(s, num);
    return 0;
}
