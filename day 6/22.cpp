#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number in binary form : ";
cin>>n;
int ans =0, pow = 1;
int binNum = n;

while(binNum > 0){
    int rem = binNum % 10;
    ans += (rem * pow);
    binNum /= 10;
    pow *= 2;
}
 cout<<"Decimal representation of "<<n<<" is : "<<ans;
return 0;
}