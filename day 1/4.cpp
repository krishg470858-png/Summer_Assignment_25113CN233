#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number (n):";
    cin>>n;
    int count = 0;
    if(n == 0){
        count = 1;
    }else{
    while(n>0){
        n = n / 10;
        count++;
    }
}
   cout<<"The number of digit in the given number is :"<<count;

    return 0;
}