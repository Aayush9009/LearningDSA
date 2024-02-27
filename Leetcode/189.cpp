#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//-------------Using STL Algorithm-------------x
// int main(){
//     vector<int> nums;
    
//     nums.push_back(1);
//     nums.push_back(2);
//     nums.push_back(3);
//     nums.push_back(4);
//     nums.push_back(5);
//     nums.push_back(6);
//     nums.push_back(7);
    
//     rotate(nums.begin(),nums.begin()+4,nums.end());
    
//     cout<<"Rotated Array is-> "<<endl;
//     for(auto i:nums){
//         cout<<i<<" ";
//     }
    
//     return 0;
// }

//------------------General Method-------------x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array Length:- ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Array elements-> "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key to Rotate Array in Right Direction-> ";
    int k;
    cin>>k;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }

    cout<<"Printing the Rotated Array-> "<<endl;
    arr = temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}