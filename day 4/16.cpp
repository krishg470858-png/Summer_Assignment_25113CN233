#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int start, end;
    cout<<"Enter the starting number : ";
    cin>>start;
    cout<<"Enter the ending number : ";
    cin>>end;

    for(int num = start; num <= end; num++){
        int original = num;
        int temp = num;
        int digits = 0, sum = 0; 

        while(temp != 0){
            digits++;
            temp = temp/10;
        }

        temp = num;

        while(temp != 0){
            int digit = temp % 10;
            sum = sum + pow(digit, digits);
            temp = temp / 10;
        }

        if(sum == original)
        cout<<original<<" ";

    }

    return 0;
}