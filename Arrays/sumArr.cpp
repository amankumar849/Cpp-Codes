#include<iostream>
using namespace std;
int main(){
    int arr[] = {11,23,50,8,91};
    int sum = 0;
    for(int i=0; i<=4; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}