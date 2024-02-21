// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<endl;
//     cout<<"Enter the number of rows and columns:- ";
//     cin>>n>>m;
//     int arr[n][m];
//     cout<<"Enter the Matrix elements."<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }
//     int TotalCoverage = 0;
//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==0){
//                 int Coverage = 0;
//                 //Check immediate Right
//                 if(j<(m-1) && arr[i][j+1]==1){
//                     Coverage++;
//                 }
//                 //Check immediate Left
//                 if(j>0 && arr[i][j-1]==1){
//                     Coverage++;
//                 }
//                 //Check immediate Top
//                 if(i>0 && arr[i-1][j]==1){
//                     Coverage++;
//                 }
//                 //Check immediate Botttom
//                 if(i<(n-1) && arr[i+1][j]==1){
//                     Coverage++;
//                 }
//                 TotalCoverage+=Coverage;
//             }
            
//         }
//     }
//     cout<<"Total Coverage of 0 is "<<TotalCoverage<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<endl;
//     cout<<"Enter the array length:- ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the array elements-> ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans[n];
//     for(int i=0;i<n;i++){
//             bool found =false;
//             for(int j=(i+1);j<n;j++){
//                 if(arr[j]>arr[i]){
//                     ans[i]=arr[j];
//                     found = true;
//                     break;
//                 }
//             }
//             if(found==false){
//                 ans[i]=-1;
//             }
//         }
      
//     cout<<"NGE for each element of the array is-> ";
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array length:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array elements:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int reverseArray[n];
    for(int i=0;i<n;i++){
        reverseArray[i]=arr[n-(i+1)];
    }
    cout<<endl;
    cout<<"The reversed Array is-> ";
    for(int i=0;i<n;i++){
        cout<<reverseArray[i]<<" ";
    }
}