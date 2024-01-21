#include<iostream>
using namespace std;
//CODESTUDIO FIND UNIQUE
/*
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<"Unique element of array is: "<<ans<<endl;
    return 0;
}
*/

/*
int main(){
    int arr[]={3,3,2,2,2,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
   
    sort(arr,arr+n);
     
    int ans[3];
    int i=0;
    while(i<n){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                break;
            }

        }
        ans[i]=count;
        i += count;
    }
    for(int k=0;k<3;k++){
        cout<<ans[k]<<" ";
    }
  

}*/
//FINIDING DUPLICATE NUMBER CODESTUDIO BRUTFORCE CODE
/*
int main(){
    int n;
    cout<<"\nEnter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter[100];
    for(int x=1;x<=n-1;x++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==x){
                count++;
            }
        }
        counter[x-1]=count;
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        cout<<counter[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        if(counter[i]==2){
            cout<<"\nDuplicate element in the array is "<<(i+1)<<endl;
        }
    }
    

}*/
//OPTIMIZED CODE

int main(){
     int n;
    cout<<"\nEnter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Printing sorted array elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   cout<<endl;
    for(int i=0;i<n;i++){ 
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}




















