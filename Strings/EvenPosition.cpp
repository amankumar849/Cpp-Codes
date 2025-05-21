#include<iostream>
using namespace std;
int main(){
    string s ;
    getline(cin,s);
    cout<<s<<endl;
    int n = s.length();
    int count = 0;
    for(int i=0; i<n;i++){
        if(i%2==0)
        count++;
    }
    cout<<count;
}