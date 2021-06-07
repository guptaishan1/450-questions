#include <iostream>
#include <list>
#include <algorithm>
#include <climits>
using namespace std;
int main() 
{
    int a[] = {9 ,-51 ,-20 ,-13 ,-51 ,40 ,-21 ,75 ,-24 ,29 ,-86 ,5 ,-38 ,15 ,48 ,-87 ,-9 ,42 ,39 ,64 ,47 ,-63 ,22 ,-81 ,-20 ,-100 ,28};
    int s = sizeof(a)/sizeof(int);
    int *t = max_element(a,a+s);
    if(*t<0){
        cout<<*t;
    }
    else{
        int cm=0,mm=0;
        for(int i =0;i<s;i++){
            cm = cm +a[i];
            if(a[i]>0 and cm>mm){
                mm = cm;
            }
            if(cm<0){
                cm = 0;
            }
        }
        cout<<mm;
    }
    return 0; 
}
