/*A B C D 
  A B C D
  A B C D
  A B C D*/
#include<iostream>
using namespace std;
int main(){
    int n; // number of rows
    cout<<"Enter the rows :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<char(64+j) << " ";
        }
        cout<<endl;
    }
}