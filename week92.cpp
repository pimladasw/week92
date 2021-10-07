#include<bits/stdc++.h>
using namespace std;
int main(){
    int b[3],A,B,C,a[3];
    char ch[3],h;
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    sort(a,a+3);
    for(int i=0;i<3;i++){
        cin >> ch[i];
    }
    A=a[0];
    B=a[1];
    C=a[2];
    for(int i=0;i<3;i++){
        if(ch[i]=='A'){
            cout << A << " ";
        }
        if(ch[i]=='B'){
            cout << B << " ";
        }
        if(ch[i]=='C'){
            cout << C << " ";
        }
    }
    return 0;
}
