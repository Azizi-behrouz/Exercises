#include <iostream>
using namespace std;

long long fact(int n){
    long long f=1;
    for(int i=1;i<=n;i++)f*=i;
    return f;
}

long long comb(int n,int k){
    return fact(n)/(fact(k)*fact(n-k));
}

int main(){
    cout<<comb(5,2);
    return 0;
}
