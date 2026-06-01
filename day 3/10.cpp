#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter starting number :";
      cin>>a;
     cout<<"Enter ending number:";
       cin>>b;
       for (int i=a; i<=b; i++){
        int count = 0;
        if(i<=1)
        continue;

        for(int j =1; j<=i; j++){
            if (i%j == 0)
            count++;
        }
        if (count==2)
        cout<<i<<" ";
           }
           return 0;
           
      }