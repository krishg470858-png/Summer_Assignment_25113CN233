#include<iostream>
#include<cmath>
using namespace std;

void armstrongNum(int n){
    int count=0, original=n, add=0, temp=n;
    while(n>0){
        int digit = n%10;
        count++;
        n = n/10;
    }
    while(temp>0){
        int a = temp%10;
        int p = pow(a,count);
        add = add + p;
          temp = temp/10;
    }

    if(add == original){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    armstrongNum(n);
    return 0;
}