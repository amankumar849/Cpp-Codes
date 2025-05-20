#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The 1st :";
    cin>>a;
    cout<<"Enter The 2nd :";
    cin>>b;
    cout<<"Enter The 3rd :";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is greater ";
        }
        else {
            cout<<"c is greater ";
        }
    }
    else { 
        if(b>c){
            cout<<"b is greater ";
        }
        else {
            cout<<"c is greater ";
        }
}
}