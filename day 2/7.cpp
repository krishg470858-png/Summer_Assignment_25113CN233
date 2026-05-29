#include<iostream>
using namespace std;


int main(){
    int n;
     cout<<"enter the value of n:";
    cin>>n;
    int product = 1;
    while (n>0){
      int digit = n%10;
       product= digit* product;
      n = n/10;
    }
    cout<<product;
        return 0;
}