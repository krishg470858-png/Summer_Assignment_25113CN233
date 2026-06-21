#include<iostream>
using namespace std;

int sumOfNumber(int a, int b){
    int sum = a+b;
     
    return sum;
}

int main(){
    int a; 
    cout<<"Enter the first number : ";
    cin>>a;
    int b;
    cout<<"Enter the second number :";
    cin>>b;

    cout<<"Sum = "<<sumOfNumber(a,b)<<endl;
    return 0;
}