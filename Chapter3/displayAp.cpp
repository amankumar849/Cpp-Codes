#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;
    //4 7 10 13 ......n
    int a=4;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a+3;
    }
}