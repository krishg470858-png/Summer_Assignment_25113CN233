#include<iostream>
using namespace std;

int primeCheck(int n){
    int count = 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n; 
    cout<<"Enter the number :";
    cin>>n;

    if(primeCheck(n)==1){
        cout<<"Prime number"<<endl;
    }else{
        cout<<"Not a prime number"<<endl;
    }
 
    return 0;
}