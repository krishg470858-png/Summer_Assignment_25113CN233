#include<iostream>
using namespace std;

int main(){
    char str[100];
    int length = 0;
    bool palindrome = true;

    cout<<"Enter the string:";
    cin.getline(str,100);

    while(str[length] !='\0'){
        length++;
    }

    for(int i=0; i<length/2; i++){
        if(str[i] != str[length-i-1]){
            palindrome = false;
            break;
        }
    }

    if(palindrome){
        cout<<"The string is a palindrome."<<endl;
    } else {
        cout<<"The string is not a palindrome."<<endl;
    }

    return 0;

}