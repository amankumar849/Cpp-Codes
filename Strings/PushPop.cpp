#include<iostream>
using namespace std;
int main(){
    string s = "Aman";
    cout<<s<<endl;               //Aman


    s.push_back('k');
    cout<<s<<endl;               //Amank
    s.push_back('u');
    cout<<s<<endl;               //Amanku

    s.pop_back();    
    cout<<s<<endl;               //Amank
    s.pop_back();
    cout<<s<<endl;              //Aman

    s.append(" kumar");
    cout<<s<<endl;              //Aman kumar


    cout<<s.length()<<endl;      // 10


    s.clear();
    cout<<s.length();             // 0

}