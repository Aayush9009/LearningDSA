//--------------------BruteForce------------(But Best In RunTime)---x
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void AddElements(int arr[],int x){
    for(int i= 0;i<x;i++){
        cin>>arr[i];
    }
}
int createNum(int arr[],int y){
    int Num1 = 0;
    for(int i=0;i<y;i++){
        Num1 += arr[i]*pow(10,(y-(i+1)));
    }
    return Num1;
}
int main(){
    int n,m;
    cout<<"Enter the Length of 2  numbers :- ";
    cin>>n>>m;
    int A[n];
    int B[m];
    cout<<"Adding Elements to A. "<<endl;
    AddElements(A,n);
    cout<<"Adding Elements to B. "<<endl;
    AddElements(B,m);
    int a = createNum(A,n);
    cout<<"a = "<<a<<endl;
    int b = createNum(B,m);
    cout<<"b = "<<b<<endl;
    int c = a+b;
    cout<<"Sum of 2 Arrays is = "<<c<<endl;
    vector<int>ans;
    while(c>0){
        int x = c%10;
        ans.push_back(x);
        c = c/10;
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<" ";
    }
    
    return 0;
}
