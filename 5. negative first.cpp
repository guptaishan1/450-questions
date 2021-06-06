#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() 
{
    int a[] = {-4,2,-3,5,-6,1};
    int n=0;
    for(int i=0;i<6;i++){
        if(a[i]<0){
            if(i != n){
                swap(a[i],a[n]);
            }
            n++;
        }
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0; 
}
