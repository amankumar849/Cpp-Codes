#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;
    //1 2 3 4 5 6 7 8 9 continue 3,6
    for(int i=1; i<=n; i++){
        if(i==3 || i==6) continue;
        cout<<i<<" ";
    }
}