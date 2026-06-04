#include <iostream>
using namespace std;

int main(){
    string w;
    cin >> w;
    int lower = 0;
    int upper = 0;
    
    for(char ch:w){
        if(ch >= 'a' && ch <= 'z'){
            lower |= (1<<(ch-'a'));
        }
        else if((ch >= 'A' && ch <= 'Z')){
            upper |= (1<<(ch-'A'));
        }
    }

    cout << ((lower == (1<<26) - 1 && upper == (1<<26) -1 )? "yes" : "no");
    return 0;
}