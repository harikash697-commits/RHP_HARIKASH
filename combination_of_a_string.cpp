#include <iostream>
using namespace std;

int main(){
    string w;
    cin >> w;
    int leng = w.length();

    for(int c = 1; c < (1<<leng); c++){
        string cs = "";

        for(int str = 0; str < leng; str++){
            if(c&(1<<str)){
                cs += w[str];
            }
        }

        cout<<cs<<endl;
    }

    return 0;
}