#include<iostream>
using namespace std;

void palindromeNumber(int n){
    int reverse = 0;
    int original=n;
    while(n>0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
    if(reverse == original){
    cout<<" palindrome number";
}
    else{
        cout<<"not palindrome no";
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    palindromeNumber(n);
    
    return 0;
}