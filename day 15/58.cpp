#include<iostream>
using namespace std;

void leftRotate(int arr[],int n){
    int first = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }

    arr[n-1]=first;

    cout<<"Array after left rotation : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;

    cout<<"Enter the  number of array elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    leftRotate(arr, n);

    return 0;

}