#include <iostream>
using namespace std;

int min2(int a,int b){
    return a<b?a:b;
}

int min(int a,int b,int c,int d){
    return min2(min2(a,b),min2(c,d));
}

int main(){
    cout<<min(8,3,6,2);
    return 0;
}
