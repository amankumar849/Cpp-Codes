#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,98,57,89,8,9,54,97};
    int n = sizeof(arr)/4;
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<max;
}