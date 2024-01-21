#include<iostream>
using namespace std;
int main(){
    /*
    int num=2;
    char ch='A';
    cout<<endl;
    switch(num){
        case 1: cout<<"First"<<endl;
                break;
        case 2: cout<<"Second"<<endl;
                break;

           // switch(ch){
            //case 'A':
           // cout<<"Value of ch is "<< ch<<endl;
            //break;
       // }

       
               
        default: cout<<"This is a default case"<<endl;
    }
    cout<<endl;
    */
   int a;
   cout<<"Enter the value of a "<<endl;
   cin>>a;
   cout<<endl;
   int b;
   cout<<"Enter the value of b "<<endl;
   cin>>b;
   cout<<endl;
   char op;
   cout<<"Enter the value of operation"<<endl;
   cin>>op;
   cout<<endl;
   switch(op){
    case '+':
       cout<<(a+b)<<endl;
       break;
    case '-':
        cout<<(a-b)<<endl;
        break;
    case '*':
        cout<<(a*b)<<endl;
        break;
    case '/':
        cout<<(a/b)<<endl;
        break;
    case '%':
        cout<<(a%b)<<endl;
        break;
     
    default:
       cout<<"This  is a default case"<<endl;

   }
      

  
   
  }
