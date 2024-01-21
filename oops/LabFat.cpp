#include<iostream>
using namespace std;
/*
class car{
    private:
        char company[20];
        int top_speed;
    public:
        void SetData(){
            cout<<"Enter Company: ";
            cin>>company;
            cout<<"Enter top speed: ";
            cin>>top_speed;
        }
        void DisplayData(){
            cout<<"\nCompany: "<<company;
            cout<<"\nTop Speed: "<<top_speed;
        }

};
int main(){
    car o1;
    o1.SetData();
    o1.DisplayData();
    return 0;
}*/
//Constructor
class Rectangle{
    int width,height;
    public:
    Rectangle(){
        width = 5;
        height = 6;
        cout<<"Constructor Called";
        cout<<"\nWidth = "<<width<<endl;
        cout<<"Height = "<<height<<endl;
    }
};
int main(){
    Rectangle r1;
    return 0;
}