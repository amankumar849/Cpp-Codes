// 1
// B 3
// D 5 F
// 7 H 9 J


#include<iostream>
using namespace std;

int main(){
    int n; // rows
    cout<<"Enter the no :";
    cin>>n;

    int count = 1;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if( count %2 == 0) {
                cout<< char( count +64) << " ";
            } else {
                cout << count << " ";
            }
            count++;
        }
        cout<<endl;
    }
}