#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,5,2,3,2,4,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxFreq =0, element;

    for(int i=0; i<n; i++){
        int count = 1; 

        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq = count;
            element = arr[i];
        }
    }

    cout<<"Element with maximum frequency = "<<element<<endl;
    cout<<"Frequency = "<<maxFreq<<endl;

    return 0;
}