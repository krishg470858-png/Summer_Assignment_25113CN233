#include<iostream>
using namespace std;


int main(){
    int n;
     cout<<"enter the value of n:";
    cin>>n;

    int sum = 0;

    while (n>0){
      int digit= n%10;
      sum = digit + sum;
      n = n/10;
    }

    cout<<"sum of digit is: "<<sum<<endl;

        return 0;
}