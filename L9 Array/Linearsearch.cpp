#include<iostream>
using namespace std;
//LAYMAN APPROCH
/*
int main(){
    int arr[8]={13,23,54,1,0,45,2,1};
    int count=0;
    for(int i=0;i<8;i++){
           if(arr[i]==1){
            cout<<"Yes"<<endl;
            count++;
           }
           
    }
    cout<<count<<endl;
}*/
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
  int arr[8]={13,23,54,1,0,45,2,1};
  cout<<"Enter the key: "<<endl;
  int n;
  cin>>n;
  bool found= search(arr,8,n);
  if(found){
    cout<<"Element present: "<<endl;
  }
  else{
    cout<<"Element is absent: "<<endl;
  }
}

