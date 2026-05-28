#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int count=1;
    int sum = 0;
    while(count <= n){
        sum = sum + count;
        count++;
    }
    cout<<"The sum of first "<<n<<" natural numbers is :"<<sum;
    return 0;
}