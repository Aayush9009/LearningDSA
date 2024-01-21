#include<iostream>
using namespace std;
// class Hero{
//     int health;

//     public:
//     char Level;
//     int gethealth(){ //Using Getter
//         return health;
//     }
//     void sethealth(int h){ // Using Setter
//          health = h;
//     }
//     Hero(){
//         cout<<"Constructor called."<<endl;
//     }
//     Hero(int health,char Level){
//         this -> health = health;
//         this -> Level = Level;
//     }
//     void print(){
//         cout<<"Level N Health is "<<Level<<" "<<health<<endl;
//     }

// };
// int main(){

//     //Creation of object
//     // Hero h1; //Static allocation
//     // Hero *h2 = new Hero; //Dynamic allocation
//     // h1.sethealth(90);

//     // (*h2).sethealth(50);
//     // cout<<"Health is : "<<(*h2).gethealth()<<endl;

//     // h1.health = 70;
//     //cout<<"Size of object is : "<<sizeof(h1)<<endl;
//     //cout<<"Health is : "<<h1.gethealth()<<endl;

//     Hero Aayush(100,'B');
//     Hero Nitish(Aayush);// Same as Nitish.health = Aayush.health
//                                    //Nitish.level = Aayush.level;
//     Aayush.print();
//     Nitish.print();
//     return 0;
// }

class Hero{
    int health;
    public:
    char level;
    char name[100];
    static int TimeToComplete;

    Hero(){
        cout<<"Default constructor called."<<endl;
    }
    ~ Hero(){
        cout<<"Default Destructor called."<<endl;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }
    int getlevel(){
        return level;
    }
    void setlevel(char ch){
        level = ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    void print(){
        cout<<"Name: "<<name<<", Health: "<<health<<", Level: "<<level<<endl;
    }
};
int Hero :: TimeToComplete = 5;
int main(){
    Hero h1;
    h1.sethealth(70);
    h1.setlevel('B');
    char Name[100]="Aditya";
    h1.setname(Name);
    //cout<<endl;
    //h1.print();

    h1.name[0]='G';

    //Hero h2(h1);
    //cout<<endl;
    //h2.print();

    //cout<<endl;
    Hero *h2 = new Hero();

    delete h2;
    cout<<"Static value is "<<Hero::TimeToComplete<<endl;

    return 0;
}