#include<iostream>
#include<string>
using namespace std;

string removeOcc(string s,string part){
     while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
     }
     return s;
}
int main(){

    string str;
    cout<<"Enter the string :- ";
    cin>>str;

    string part;
    cout<<"Enter the part to be removed:- ";
    cin>>part;

    string final1 = removeOcc(str,part);
    cout<<"Final String is = "<<final1<<endl;

    return 0;
}