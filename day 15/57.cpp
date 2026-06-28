#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    cout<<"Reversed array : ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;

    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);

    return 0;
}