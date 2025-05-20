#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,98,57,89,8,9,54,90};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);
    }
    int smx = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=mx) smx = max(smx,arr[i]);
    }
    cout<< "Largest : " << mx << endl;
    cout<< "Second Largest : " << smx;
}