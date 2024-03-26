#include<iostream>
using namespace std;
void wavePrint(int arr[][4], int nRows, int mCols)
{
    for(int i=0;i<mCols;i++){
        if(i%2==0){
          for (int j = 0; j < nRows; j++) {
            cout << arr[j][i] << " ";
          }
        }
        else{
            for (int j = nRows-1; j>=0; j--) {
            cout << arr[j][i] << " ";
          }
        }
    }
}
int main(){
    int ar1[3][4];
    cout<<"Enter the Array elements."<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>ar1[i][j];
        }
    }
    wavePrint(ar1,3,4);
    return 0;
}

