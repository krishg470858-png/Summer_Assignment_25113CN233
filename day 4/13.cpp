#include<iostream>
using namespace std;

int main(){
    int n, c;
    cout<<"Enter the number till which you want to find Fibonacci series : ";
    cin>>n;
    int a = 0;
    int b = 1;
    while(a<=n){
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}