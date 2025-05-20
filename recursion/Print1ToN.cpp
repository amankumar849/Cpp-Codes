#include<iostream>
using namespace std;
void aman(int x , int n){
    if(n<x) return;
    cout<<x<<endl;
    aman(x+1,n);
}
int main(){
    int n;
    cout<<"Enter No :";
    cin>>n;
    aman(1,n);
}