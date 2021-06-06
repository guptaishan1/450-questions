#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() 
{
    int n,k,j=0,count=0;
    cin>>n>>k;
    int t = min(n,k);
    int a[30],b[30],c[30];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    for(int i=0,k=0;i<t;i++,k++){
        if(a[i] == b[k]){
            count++;
        }
        else if(a[i]>b[k]){
            k++;
        }
        else if(a[i]<b[k]){
            i++;
        }
    }
    cout<<n+k-count;
    return 0; 
}
