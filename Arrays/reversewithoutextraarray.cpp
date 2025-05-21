#include<iostream>
using namespace std;

int main(){
    int n; // size
    cout << "Size of array : ";
    cin >> n;
    cout << "Enter " <<n<< " elements : "; 
    int a[n];
    for(int i=0; i<n; i++) { // input
        cin >> a[i];
    }
    for(int i=0; i<n/2; i++){ // reverse , swap
        int temp;
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    cout<<"Reversing the array : "; // output 
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}