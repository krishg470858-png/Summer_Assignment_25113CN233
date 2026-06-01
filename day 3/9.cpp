#include<iostream>
using namespace std;

int main(){
    int n ;
    int count = 0;
    cout<<"Enter a number :";
    cin>>n;

    if (n<=1){
        cout<< "not prime";
    } else{
        for(int i=1; i<=n; i++){
            if(n%i == 0)
            count++;
        }
        if (count==2)
    cout<<"prime number";
    else
        cout<<"not prime";
    }
    return 0;
}