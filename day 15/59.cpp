#include<iostream>
using namespace std;

void rightRotate(int arr[],int n){
    int last = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }

    arr[0]=last;

    cout<<"Array after right rotation : ";
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
    rightRotate(arr, n);

    return 0;

}