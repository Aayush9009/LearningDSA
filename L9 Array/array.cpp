#include<iostream>
using namespace std;
/*
void printArray(int arr[],int size){
         for(int i=0;i<=size;i++){
               cout<<arr[i]<<" ";
         }
    }
*/
 /*
int main(){
   
    int number[12];
    cout<<"Value at 0 index: "<< number[0]<< endl;
    
    int arr[3]={5,7,11};
    for(int i=0;i<=2;i++){
      cout<<arr[i]<<endl;
   }

*/

   

  // ACCESSING VALUE OF ARRAY
/*
  int third[15]={2,7};
  cout<<"Printing array values: "<<endl;
  int n=15;
  printArray(third,15);
  

  char fruit[4]={'A','B','G','M'};
  cout<<fruit[2]<<endl<<endl;
  cout<<sizeof(fruit)<<endl;
*/
/*
int arr[5]={4,15,614,89,1};
//Printing MAX element of array:
int max=arr[0];
int min=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max =arr[i];   
    }    
}
//Printing MIN element of array:
for(int j=0;j<5;j++){
    if(arr[j]<min){
        min=arr[j];
    }
}
cout<<"Max element in the array is: " <<max<<endl;
cout<<"Min element in the array is: " <<min<<endl;

int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[100];
cout<<"Enter the elements of the array: "<<endl;
for(int i=0;i<n;i++){
       cin>>arr[i];
}
cout<<"Elements of the array are: "<<endl;
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}

int maxi=INT_MIN;

for(int k=0;k<n;k++){
    maxi=max(maxi,arr[k]);
}

return maxi;

}
*/


#include <algorithm>
 
int main()
{
    int n = 10000;
    int val = 1;
 
    int arr[n];
    std::fill_n (arr, n, val);
 
    // always prints 1
    std::cout << arr[323];
 
    return 0;
}



