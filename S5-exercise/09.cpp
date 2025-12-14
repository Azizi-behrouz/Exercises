#include <iostream>
using namespace std;

float average(float a,float b=0,float c=0,float d=0){
    int n=1;
    if(b!=0)n++;
    if(c!=0)n++;
    if(d!=0)n++;
    return (a+b+c+d)/n;
}

int main(){
    cout<<average(5,10);
    return 0;
}
