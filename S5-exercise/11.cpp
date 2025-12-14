#include <iostream>
using namespace std;

long long perm(int n,int k){
    long long p=1;
    for(int i=0;i<k;i++)
        p*=n-i;
    return p;
}

int main(){
    cout<<perm(5,3);
    return 0;
}
