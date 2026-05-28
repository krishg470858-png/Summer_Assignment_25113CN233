#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int count = 1; count<=10; count++){
        int table = n * count;
        cout<<n<<"*"<<count<<"="<<table<<endl;
    }
    return 0;
}