#include<iostream>
using namespace std;
void Swap(int* a , int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x;
    cout<<"Enter 1st No :";
    cin>>x;

    int y;
    cout<<"Enter 2nd No :";
    cin>>y;

    Swap(&x,&y);
    cout<<"Swap :"<<x<<endl;
    cout<<"Swap :"<<y<<endl;
}
