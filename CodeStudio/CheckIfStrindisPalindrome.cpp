#include<iostream>
using namespace std;
char ToLowerCase(char ch){
    char temp;
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        temp = ch - 'A' + 'a';
        return temp;
    }
}
char ToUpperCase(char ch){
    char temp;
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        temp = ch - 'a' + 'A';
        return temp;
    }
}
bool checkPalindrome(char ch[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main(){

    cout<<"Character is "<<ToLowerCase('p')<<endl;
    cout<<"Character is "<<ToLowerCase('D')<<endl;
    cout<<"Character is "<<ToUpperCase('p')<<endl;
    cout<<"Character is "<<ToUpperCase('D')<<endl; 

    return 0;
}