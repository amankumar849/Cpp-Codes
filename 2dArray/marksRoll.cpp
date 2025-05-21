#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{90,2},{80,4},{70,5},{50,8}}; // marks , roll no :
    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}