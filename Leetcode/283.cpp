#include<iostream>
#include<vector>
using namespace std;
//------BRUTEFORCE APPROACH------------x
// int main(){
//     int n;
//     cout<<"Enter the Array Length:- ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the Array Elements:- ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<(n-1);i++){
//         for(int j=(i+1);j<n;j++){
//             if(arr[i]==0){
//                 if(arr[j]!=0){
//                     swap(arr[i],arr[j]);
//                     break;
//                 }
//             }
//         }
//     }
//     cout<<"Printing the Array:- ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
int main(){
    int n;
    cout<<"Enter the Array Length:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    cout<<"Printing the Array:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}