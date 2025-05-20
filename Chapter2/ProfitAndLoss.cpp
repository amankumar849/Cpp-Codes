#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    int sp;
    cout<<" Enter Selling Price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profite";
    }
    else if(cp>sp){
        cout<<"Loss";
    }
    else if(cp==sp){
        cout<<"No profite No loss";
    }

}