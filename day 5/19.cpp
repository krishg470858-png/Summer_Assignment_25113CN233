#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number you want to find factor of : ";
    cin>>n;
    int factor;

    for(int i=1; i<=n; i++){
        factor = n%i;
        if(factor == 0)
            cout<<i<<" ";
        
    }

}