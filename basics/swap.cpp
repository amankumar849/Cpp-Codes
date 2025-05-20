#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter 1st No :";
    cin>>x;
    int y;
    cout<<"Enter 2nd No :";
    cin>>y;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"rev :"<<x;
    cout<<endl;
    cout<<"rev :"<<y;
}
