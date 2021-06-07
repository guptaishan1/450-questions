#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() 
{
    int a[] = {1,2,3,4,5,6};
    int s = sizeof(a)/sizeof(int);
    int temp = a[s-1];
    for(int i = s-1;i>0;i--){
        a[i] = a[i-1];
    }
    a[0] =temp;
    for(int i = 0;i<s;i++){
        cout<<a[i]<<" ";
    }
    return 0; 
}
