#include<iostream>
#include<vector>
using namespace std;
//-----------------Using Vector-----------x
// vector<int> Reverse(vector<int> v){
//     int s=0;
//     int e=v.size()-1;
//     while(s<=e){
//         swap(v.at(s),v.at(e));
//         s++;
//         e--;
//     }
//     return v;
// }
// void print(vector<int> v){
//     cout<<"Printing the reversed Array:- ";
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     vector<int> ans = Reverse(v);
//     print(ans);
// }

//---------------Without Using vector(BruteForce Approch)----------x
int main(){
    int n;
    cout<<"Enter the array length:- ";
    cin>>n;

    int arr[n];

    cout<<"Enter the Array elements:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans[n];

    for(int i=0;i<n;i++){
        ans[i]=arr[n-(i+1)];
    }

    cout<<"Printing the reversed Array:- ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}