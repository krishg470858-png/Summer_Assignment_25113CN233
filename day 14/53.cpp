#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target)
        return i;
    }
    return -1;
}

int main(){
    int n, target;
    cout<<"Enter number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<"Enter element to search : ";
    cin>>target;

    int result = linearSearch(arr, n, target);

    if(result == -1)
    cout<<"Element not found.";
    else
    cout<<"Element found at position "<<result+1;

    return 0;


}