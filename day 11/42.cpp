#include<iostream>
using namespace std;

int maxOfNumber(int a, int b){
    if(a>b){
        return a;
    }else{
      return b;
    }
      }

      int main(){
        int a;
        cout<<"Enter the first number :";
        cin>>a;
        int b;
        cout<<"Enter the second number :";
        cin>>b;
        cout<<"Maximum = "<<maxOfNumber(a,b)<<endl;

        return 0;
      }