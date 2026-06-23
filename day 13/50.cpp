#include<iostream>
using namespace std;

int main(){
    int arr[10], sum=0;
    float avg;

    cout<<"Enter 10 elements : "<<endl;

    for(int i=0; i<10; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    avg = (float)sum/10;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg<<endl;

    return 0;
}