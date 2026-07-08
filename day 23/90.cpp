#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){

        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){

                cout<<"First repeating character: "<<str[i]<<endl;
                return 0;
            }
        }
    }
    cout<<"No repeating character found."<<endl;
    
    return 0;
}