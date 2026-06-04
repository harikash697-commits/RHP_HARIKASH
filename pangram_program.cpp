#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Give me the string: ";
    cin >> str;
    int a = 0;

    for(char ch:str){
        a |= (1 << (ch -'a'));
    }

    cout << ((a == (1 << 26) - 1)? "yes" : "no");
    return 0;
}