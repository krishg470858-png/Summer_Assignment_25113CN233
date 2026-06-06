#include<iostream>
using namespace std;

int main(){
    int n, rem;
    cout<<"Enter the number you want to check perfect : ";
    cin>>n;
    int sum = 0;

    for(int i = 1; i < n; i++){
      rem = n%i;
        if(rem == 0)
            sum = sum + i; 
            
    } 
    if(sum == n)
    cout<<n<<" is a Perfect number";
    else
    cout<<n<<" is Not a perfect number";

    return 0;

}