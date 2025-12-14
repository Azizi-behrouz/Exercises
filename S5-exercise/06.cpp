#include <iostream>
using namespace std;

int max(int a,int b,int c,int d){
    int m=a;
    if(b>m)m=b;
    if(c>m)m=c;
    if(d>m)m=d;
    return m;
}

int main(){
    cout<<max(4,7,1,9);
    return 0;
}
