#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,7,5,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=8;
    bool found = false;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == sum){
                cout<<"Pair found: "<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
                found = true;
            }
        }
    }
    if(!found){
        cout<<"No pair found.";
    }

    return 0;
}