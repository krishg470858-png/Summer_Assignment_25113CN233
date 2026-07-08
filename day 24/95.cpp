#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, word="", longest="";

    cout<<"Enter a setence: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        
        if(str[i]!=' ' && i != str.length()){
            word+=str[i];
        }
        else{
            if(word.length()>longest.length()){
                longest=word;
            }
            word="";
        }
    }

    cout<<"Longest word: "<<longest<<endl;
    cout<<"Length: "<<longest.length();

    return 0;
}
        
            