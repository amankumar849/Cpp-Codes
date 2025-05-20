#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;
    int Rev = 0;
    int a;
    while(n>0){
        a = n%10;
        Rev = Rev*10+a;
        n = n/10;
    }
    cout<<Rev;
}