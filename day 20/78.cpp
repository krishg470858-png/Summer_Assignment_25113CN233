#include<iostream>
using namespace std;

int main(){
    int a[10][10], n;
    bool symmetric=true;

    cout<<"Enter the order of square matrix:";
    cin>>n;

    cout<<"Enter the elements of square matrix:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] != a[j][i]){
                symmetric = false;
                break;
            }
        }
        if(!symmetric)
        break;
    }

    if(symmetric)
    cout<<"The matrix is symmetric.";
    else
    cout<<"The matrix is not symmetric.";

    return 0;
}