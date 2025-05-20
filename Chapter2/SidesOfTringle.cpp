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
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Trangle : ";
    }
    else
    {
        cout<<"Not Valid Trangle : ";
    }
}