#include<iostream>
using namespace std;
int Fabo(int n){
    if(n==1 || n==2) return 1;
    return Fabo(n-1) + Fabo(n-2); //1 1 2 3 5 8 13 21
}
int main(){
    int n;
    cout<<"Enter No :";
    cin>>n;
    cout<<Fabo(n);
}