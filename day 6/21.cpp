#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = 0, pow = 1;
    int decNum = n;
            while(decNum > 0){
                int rem = decNum%2;
                decNum /= 2;
                ans += (rem * pow);
                pow *= 10;
                cout<<ans<<endl;
            }
            cout<<"Binary representation of "<<n<<" is : "<<ans;
            return 0;
}