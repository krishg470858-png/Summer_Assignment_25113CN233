#include<iostream>
using namespace std;

int main()
{
    int arr1[]={2,4,6,8,10};
    int arr2[]={1,2,3,4,5,6};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    cout<<"Common elements in two arrays: ";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}