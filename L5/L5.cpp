#include<iostream>
using namespace std;
int main(){
    //int a=4;
    //int b=6;

    //cout<<"a&b"<< (a&b) <<endl;
    //cout<<"a|b"<< (a|b) <<endl;
    //cout<<"a^b"<< (a^b) <<endl;
    //cout<<"~a"<< (~a) <<endl;

    //cout<< (17>>1) <<endl;
    //cout<< (17>>2) <<endl;
    //cout<< (19<<1) <<endl;
    //cout<< (21<<2) <<endl;

    //int i=7;
    //cout<< (++i) <<endl;
    //cout<< (i++) <<endl;
    //cout<< (i--) <<endl;
    //cout<< (--i) <<endl;

    /*int a,b =1;
    a=10;
    if (++a)
    cout<<b;
    else
    cout<< ++b;
   
   int n;
   cout<<"Enter the value of n"<<endl;
   cin>>n;
   cout<<"printing count from 1 to n"<<endl;
   for(int i=1;i<=n;i++){
    cout<<i<<endl;
   }

int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"printing the count from 1 to n"<<endl;
int i=1;
for(;;){
    if(i<=n){
        cout<<i<<endl;
    }
    else{
        break;
    }
       
       i=i+1;

}
   
     int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
     for(int a=0,b=1;a>=0 && b>=1;a--,b--){
        cout<<a<<" "<<b<<endl;
     }

int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"Printing sum from 1 to n"<<endl;
int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+i;
 

}
cout<<sum<<endl;

int n;
cin>>n;
int a=0;
int b=1;
cout<<a<<" "<<b<<' ';
for(int i=1;i<=n;i++){
    int F=a+b;
    cout<<F<<" ";
    a=b;
    b=F;  


}
int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;
bool isprime = 1;
for(int i=2;i<n;i++){
    if(n%i==0){
        
        isprime =0;
        break;
    }
  
}
if(isprime == 0){
    cout<<"Not a Prime number"<<endl;

}
else{
    cout<<"Is a Prime number"<<endl;
}
int n;
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Hi";
    cout<<"Hey"<<endl;
    continue;
    cout<<"Reply ro kardo";
}
//VARIABLE SCOPING
 //cout<<a<<endl;
int a=3;
cout<<a<<endl;

if(true){
    int a=5;
    cout<<a<<endl;
}

// LEETCODE PROBLEM 1 :-
int n;
cout<<"Enter the value of integer:"<<endl;
cin>>n;
int product=1;
int sum=0;
while(n!=0){
    int digit =n%10;
    product=product*digit;
    sum=sum+digit;
    n=n/10;

}
int answer =product-sum;
cout<<answer<<endl;
*/
int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;
 int count =0;
 while(n!=0){
    if(n&1){
        count++;

    }
    n=n>>1;

 }cout<<count<<endl;





} 

  







    

