#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;
    int Sum = 0;
    int a;
    while(n>0){
        a = n%10;
        Sum = a+Sum;
        n = n/10;
    }
    cout<<Sum;
}