#include<iostream>
using namespace std;

int main(){
    int a[100], n, key;
    int low=0, high, mid;
    bool found=false;

    cout<<"Enter the number of elements : ";
    cin>>n;

    cout<<"Enter "<<n<<" sorted elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"Enter the elemets to search: ";
    cin>>key;

    high = n-1;

    while(low<=high){
        mid=(low+high)/2;

        if(a[mid] == key){
            cout<<"Element found at position "<<mid+1;
            found=true;
            break;
        }
        else if(key<a[mid]){
            high = mid-1;
        }
        else{
        low = mid+1;
          }
    }
    if(!found){
        cout<<"Element not found.";
    }
    return 0;
}