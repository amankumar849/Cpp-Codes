#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0] = 3;
    arr[0][1] = 5;
    arr[0][2] = 2;
    arr[1][0] = 9;
    arr[1][1] = 4;
    arr[1][2] = 6;
    for(int i=0; i<2; i++) { //row
        for(int j=0; j<3; j++){ //col
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}