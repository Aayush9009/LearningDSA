#include<iostream>
using namespace std;
int main(){
    //Creating Linear Array
    int n;
    cout<<"Enter the Size of Array-> ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements-> "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array formed is:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int r,c;
    cout<<"\nEnter the number of Rows and Column-> ";
    cin>>r>>c;
    int arr1[r][c];
    cout<<"Enter the 2D Array elements-> "<<endl; 
    // Row wise Input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }

    //Col. wise Input
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cin>>arr1[j][i];
        }
    }

    cout<<"Printing 2D Array."<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr2[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Printing 2D Array."<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}