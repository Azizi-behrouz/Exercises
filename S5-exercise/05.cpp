#include <iostream>
using namespace std;

int min(int a,int b,int c,int d){
    int m=a;
    if(b<m)m=b;
    if(c<m)m=c;
    if(d<m)m=d;
    return m;
}

int main(){
    cout<<min(4,7,1,9);
    return 0;
}
