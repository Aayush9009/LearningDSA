#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void RowSum(int arr[][4],int r,int c){
    int result[r];
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
        result[i]=sum;
    }
    cout<<"Row wise sum is-> ";
    for(int i=0;i<r;i++){
        cout<<result[i]<<" ";
    }
    
}
void ColSum(int arr[][4],int r,int c){
    int result[c];
    for(int i=0;i<c;i++){
        int sum = 0;
        for(int j=0;j<r;j++){
            sum += arr[j][i];
        }
        result[i]=sum;
    }
    cout<<"\nCol. wise sum is-> ";
    for(int i=0;i<c;i++){
        cout<<result[i]<<" ";
    }
    
}
int main(){
    // int r,c;
    // cout<<"Enter the number of Rows and Col -> ";
    // cin>>r>>c;
    int arr[3][4];
    cout<<"Enter the Array elements."<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    int n;
    cout<<"Enter the number to find -> ";
    cin>>n;

    if(isPresent(arr,n,3,4)){
        cout<<"Element found!"<<endl;
    }
    else{
        cout<<"Element Not found!"<<endl;
    }

    RowSum(arr,3,4);
    ColSum(arr,3,4);

    return 0;
}