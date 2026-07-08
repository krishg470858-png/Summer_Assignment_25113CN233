#include<iostream>
using namespace std;

int main(){
    int a[10][10], rows, cols;

    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;

    cout<<"Enter the elements of the matrix:\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>a[i][j];
        }
}
cout<<"\nColumn-wise sum:\n";
 for(int j=0; j<cols; j++){
    int sum = 0;
        for(int i=0; i<rows; i++){
            sum+=a[i][j];
        }
    cout<<"Sum of column "<<j+1<<": "<<sum<<endl;
}
return 0;
}