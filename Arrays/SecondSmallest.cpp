#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,98,57,89,8,9,54,90};
    int n = sizeof(arr)/4;
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        mn = min(mn,arr[i]);
    }
    int smn = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]!=mn) smn = min(smn,arr[i]);
    }
    cout<< "Smallest : " << mn << endl;
    cout<< "Second Smallest : " << smn;
}