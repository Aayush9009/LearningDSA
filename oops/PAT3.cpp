#include<iostream>
using namespace std;
// class car{
//     public:
//     char company[100];
//     int Top_Speed;
//     void SetData(){
//         cout<<"Enter the company name: ";
//         cin>>company;
//         cout<<endl;
//         cout<<"Enter the top speed: ";
//         cin>>Top_Speed;
//     }
//     void DisplayData(){
//         cout<<company<<" "<<Top_Speed<<endl;
//     }

// };
// int main(){
//     car o1,o2;
//     o1.SetData();
//     o1.DisplayData();
//     o2.SetData();
//     o2.DisplayData();

//     return 0;
// }

class result{
    public:
    int n;
    int arr[100];
    void getsize(int n){
        this->n = n;
    }
    void getElement(){
        cout<<endl;
        cout<<"Enter the array Elements: "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void Display(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }


};
int main(){
    result o1;
    o1.getsize(5);
    o1.getElement();
   
    cout<<"Array is :-  ";
    o1.Display();
    cout<<endl;

    return 0;
}


