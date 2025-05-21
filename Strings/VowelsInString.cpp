#include<iostream>
using namespace std;
int main(){
    string x = "goverment engneering college lakhisarai";
    int count = 0;
    for(int i=0; i<x.length(); i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') //Capital ke liye (A E I O U ) Aur Add hoga
        count++;
    }
    cout<<count;
}