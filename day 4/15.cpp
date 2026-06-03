#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, a, rem;
    cout<<"Enter the munber you want to check Armstrong : ";
    cin>>n;
    int count = 0, arm = 0;

    int digit = n;
    while(digit!=0){
        digit = digit/10;
        count++;
    }
    a=n;
    while(a!=0){
        rem = a%10;
        arm = arm + pow(rem , count);
        a = a/10;
    }

    if(arm == n)
    cout<<"Armstrong number"<<endl;
    else
    cout<<"Not armstrong number"<<endl;

    return 0;
}