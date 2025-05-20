#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,98,57,89,8,9,54,97};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for(int i=1; i<n; i++){
        //if(arr[i]<min) min = arr[i];
        mn = min(mn,arr[i]);
    }
    cout<<mn;
}