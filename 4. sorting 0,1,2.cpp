#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    int a[t+5];
    int c0=0,c1=0,c2=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i] == 0){
            c0++;
        }
        else if(a[i] == 1){
            c1++;
        }
        else{
            c2++;
        }
    }
    for(int i=0;i<c0;i++){
        cout<<0<<" ";
    }
    for(int i=0;i<c1;i++){
        cout<<1<<" ";
    }
    for(int i=0;i<c2;i++){
        cout<<2<<" ";
    }
    return 0;
}
