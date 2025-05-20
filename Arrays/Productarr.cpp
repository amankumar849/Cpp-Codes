#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,8,9};
    int product = 1;
    for(int i=0; i<=4; i++){
        product = product * arr[i];
    }
    cout<<product;
}