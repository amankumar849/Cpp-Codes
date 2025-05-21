#include<iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter the string :";
    //cin>>x; one 
    getline(cin,x); //one greater than
    cout<<x;
}