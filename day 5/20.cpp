#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number  : ";
    cin>>n;
    int largest=0;
 

    for(int i=2; i<=n; i++){
       if(n%i == 0) {

       bool prime = true;


       for(int j = 2; j<=i/2; j++){
        if(i%j == 0){
        prime = false;
        break;
    }
      }
     if(prime)
     largest = i;
    }
       }
       cout<<"Largest prime factor = "<<largest;
    return 0;
}
