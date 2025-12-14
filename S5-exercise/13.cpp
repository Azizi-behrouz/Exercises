#include <iostream>
using namespace std;

long long perm(int n,int k){
    long long p=1;
    for(int i=0;i<k;i++)p*=n-i;
    return p;
}

long long fact(int n){
    long long f=1;
    for(int i=1;i<=n;i++)f*=i;
    return f;
}

long long comb(int n,int k){
    return perm(n,k)/fact(k);
}

int main(){
    cout<<comb(6,3);
    return 0;
}
