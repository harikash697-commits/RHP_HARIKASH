#include <iostream>
using namespace std;
int main() {
int r,c;
    cout<<"Enter no of rows and cols:";
    cin>>r>>c;
    int arr[r][c],a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter an element:";
            cin>>arr[i][j];
            if(i==0){
                a[i][j]=arr[i][j];
            }
        }
    }   
for(int i=1;i<r;i++){
    int temp=0;
        int t=0;
        for(int p=0;p<c;p++){
            if(temp<a[i-1][p]){
                t=temp;
                temp=a[i-1][p];
            }
            else if(a[i-1][p]>t){
                t=a[i-1][p];
            }
        }
    for(int j=0;j<c;j++){
            a[i][j]=arr[i][j]+((a[i-1][j]==temp)?t:temp);    
    }
}
int h=a[r-1][0];
for(int i=0;i<c;i++){
    if(a[r-1][i]>h){
        h=a[r-1][i];
    }
}
cout<<"Maximum Sum:"<<h<<endl;
    return 0;
}