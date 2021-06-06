#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() 
{
    int a[] = {4,2,3,5,6,1};
    int k;
    cin>>k;
    sort(a,a+6);
    cout<<a[k-1];
    return 0;
}
