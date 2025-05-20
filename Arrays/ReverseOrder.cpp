#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Size of array : ";
    cin >> n;

    cout << "Enter " <<n<< " elements : ";
    int a[n];
    for(int i=0; i<n; i++) { // input
        cin >> a[i];
    }

    cout<<"Befor reversing the array : ";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int b[n]; // second array
    for(int i=0; i<n; i++){
        b[i] = a[n-1-i];
    }

    cout<<"After reversing the array : ";
    for(int i=0; i<n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}