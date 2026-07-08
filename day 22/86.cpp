#include<iostream>
using namespace std;

int main(){
    char str[100];
    int word=0;

    cout<<"Enter a sentence: ";
    cin.getline(str, 100);

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
            word++;
        }
    }

    cout<<"Number of words: "<<word+1<<endl;

    return 0;
}