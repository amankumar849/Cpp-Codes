/*12345
  12345
  12345
  12345
  12345*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}