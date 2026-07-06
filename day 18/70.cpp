#include<iostream>
using namespace std;

int main(){
    int a[100], n, i, j, minindex, temp;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter"<<" "<<n<<" "<<"elements: ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n-1; i++){
        minindex=i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
    }

    cout<<"Sorted Array in ascending order: \n";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}