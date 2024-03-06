#include<iostream>
#include<string>
using namespace std;
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
int Length(char ch[]){
    int count = 0;
    for(int i=0;i<20;i++){
        if(ch[i]!='\0'){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
char getMaxOccChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch>='a' && ch<='z'){
            int number = ch - 'a';
            arr[number]++;
        }
    }
    int maxCount = -1;
    int result = 0;
    for(int i = 0;i<26;i++){
        if(arr[i]>maxCount){
            maxCount = arr[i];
            result = i;
        }
    }
    char ans = 'a' + result;
    return ans;
}
int main(){

    char name[20];
    cout<<endl;
    cout<<"Enter your name :- ";
    cin>>name;

    //name[3]='\0';

    cout<<"Your Name is -> ";
    cout<<name<<endl;
    
    int len = Length(name);
    int s = 0;
    int e = len-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
    cout<<"The Reversed Name is "<<name<<endl;
    
    int Palin = checkPalindrome(name,len);
    if(Palin){
        cout<<"You Name is Palindrome "<<endl;
    }
    else{
        cout<<"Your Name is not a Palindrome "<<endl;
    }
    
    string str;
    cout<<"Enter the string:- ";
    getline(cin,str);
    cout<<"The String entered is "<<str<<endl;
    string s1 = "Hello World";
    cout<<s1<<endl;
    cout<<endl;
    string str1;
    cin>>str1;
    cout<<getMaxOccChar(str1)<<endl;
    string s2;
    cin>>s2;
    string part = "ush";
    cout<<s2.find(part)<<endl;
    string substring1 = s2.substr(2,1);
    cout<<substring1<<endl;

    return 0;
}   