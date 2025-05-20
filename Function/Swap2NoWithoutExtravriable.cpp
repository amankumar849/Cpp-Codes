#include<iostream>
using namespace std;
void Swap(int x , int y){
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"rev :"<<x;
    cout<<endl;
    cout<<"rev :"<<y;
}
int main(){
    int x;
    cout<<"Enter 1st No :";
    cin>>x;

    int y;
    cout<<"Enter 2nd No :";
    cin>>y;

    Swap(x,y);

}
