//Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The number :";
    cin>>n;
    if(n % 5==0 && n % 3==0){
        cout<<n<<" is  Divisible by 5 and 3 : ";
    }
    else
    {
        cout<<n<<" is Not Divisible by 5 and 3 : ";
    }
}