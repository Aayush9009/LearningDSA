#include<iostream>
using namespace std;
void LargestRowSum(int arr[][3],int r,int c){
    int result[r];
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
        result[i] = sum;
    }
    int maxi = result[0];
    int index = 0;
    for(int i=0;i<r;i++){
        if(result[i]>maxi){
            maxi = result[i];
            index= i;
        }
    }
    cout<<"Largest Row Sum is "<<maxi<<" "<<" and it is of row "<<index<<"."<<endl;
}
int main(){
    int array[3][3];
    cout<<"Enter the Array elements."<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>array[i][j];
        }
    }
    LargestRowSum(array,3,3);

    return 0;
}