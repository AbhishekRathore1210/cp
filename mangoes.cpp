#include <iostream>
using namespace std;
void print(int a[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Sum(int a[][4] , int b[][4]){
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            b[i][j]=b[i-1][j]+b[i][j-1]+a[i][j]-b[i-1][j-1];
        }
    }
}
int main()
{
    int a[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    print(a);
    int b[4][4];
    Sum(a,b);
    print(b);
    
    return 0;
}