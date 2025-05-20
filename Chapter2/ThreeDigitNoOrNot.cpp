#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The number :";
    cin>>n;
    if(n>99 && n<1000)
    {
        cout<<n<<" Three Digit No : ";
    }
    else
    {
        cout<<n<<" Not Three Digit No : ";
    }
}