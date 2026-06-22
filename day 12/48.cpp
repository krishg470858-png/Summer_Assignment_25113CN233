#include<iostream>
using namespace std;

void perfectNumber(int n){
    int add=0, original=n;
    for(int i=1; i<n; i++){
        int rem = n%i;
        if(rem == 0){
            add = add + i;
        }
    }
    if(add == original){
        cout<<"Perfect number"<<endl;
    }
    else{
        cout<<"Not a perfect number"<<endl;
    }
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;

    perfectNumber(n);

    return 0;
}