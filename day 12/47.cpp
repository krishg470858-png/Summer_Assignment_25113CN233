#include<iostream>
using namespace std;

void fibonacciSeries(int n){
    int a=0, b=1;
    int c;
    while(a<=n){
        cout<<a<<" ";
     c= a+b;
     a = b;
     b = c;
    }
}

int main(){
    int n;
    cout<<"Enter the number till which you want fibonacci series : ";
    cin>>n;

    fibonacciSeries(n);

    return 0;
}