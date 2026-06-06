#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number you want to check strong  : ";
    cin>>n;
    
    int rem;
    int sum = 0;
    int temp = n;

    while(temp > 0){
         rem = temp%10;
               int fact = 1;
        for(int i = 1; i<=rem; i++){
             fact = fact * i;
            }
            sum = sum + fact;
            temp = temp/10;
}
if(sum == n)
cout<<n<<" is a strong no.";
else 
  cout<<n<<" is not a strong no.";

  return 0;
}