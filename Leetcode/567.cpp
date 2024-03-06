#include<iostream>
using namespace std;
bool checkEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}
bool checkPermutation(string s1,string s2){
    //Storing count of every character of String1 in count1 array.
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index = s1[i]-'a';
        count1[index]++;
    }
    //Creating a sliding window and storing count of 1st window in count2 array.
    int window = s1.length();
    int count2[26]={0};
    int j = 0;
    while(j<window && j<s2.length()){
        int index = s2[j]-'a';
        count2[index]++;
        j++;
    }

    if(checkEqual(count1,count2)){
        return 1;
    }
    
    while(j<s2.length()){
        int index = s2[j]-'a';
        count2[index]++;

        int number = s2[j-window]-'a';
        count2[number]--;
        if(checkEqual(count1,count2)){
            return 1;
        }
        j++;
    }
    return 0;
}
int main(){
    string str1,str2;
    cout<<"Enter String1 and String2 to check permutation of String1 in String2:- ";
    cin>>str1>>str2;
    int result = checkPermutation(str1,str2);
    if(result){
        cout<<"String1's Permutation exist in String2."<<endl;
    }
    else{
        cout<<"Permutation of String1 not found."<<endl;
    }
    
    return 0;

}