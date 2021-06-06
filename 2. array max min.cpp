#include <iostream>
#include <list>
using namespace std;
int main() 
{
    int a[] = {4,2,3,5,6,1};
    int max = a[0];
    int min = a[0];
    for(int i=1; i <6;i++){
        if(a[i]>max){
            max= a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
        cout<<max<<endl;
        cout<<min<<endl;
    return 0;
}
