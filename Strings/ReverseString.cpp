// reverse a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Aman Kumar";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}