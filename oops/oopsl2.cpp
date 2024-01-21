#include<iostream>
using namespace std;
/*
class Employee{

    string Name;
    int age;
    double height;
    public:
    int getage(){
        return age;
    }


};
int main(){
    cout<<endl;
    cout<<"Main Function"<<endl;

}*/


// class Human{

//     public:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getage(){
//         return age;
//     }
//     void setweight(int w){ 
//         weight = w;
//     }

// };
// class Male : private Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getheight(){
//         return height;
//     }
      
// };
// int main(){
//     cout<<endl;

//     Male o1;
//     o1.sleep();
//     //cout<<o1.height<<endl;
//     //o1.setweight(9);
//     //cout<<"Weight is: "<<o1.weight<<endl;
//     //o1.age;
//     cout<<o1.getheight()<<endl;

// }


// TYPES OF INHERITANCE



//Single Inheritance
/*
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog : public Animal{


};
int main(){
    Dog d;
    cout<<endl;
    d.speak();
}*/



//MULTILEVEL INHERITANCE
/*
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog : public Animal{


};
class GermanShefard : public Dog{

};
int main(){
    GermanShefard g1;
    g1.speak();

}*/


//MULTIPLE INHERITANCE
/*
class Animal{
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
    void speak(){
        cout<<"Animal Speaking "<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Hybrid : public Animal,public Human{

};
int main(){
    Hybrid h1;
    h1.bark();
    cout<<endl;
    h1.Animal::speak();
    cout<<endl;
    h1.Human::speak();

}
*/

//POLYMORPHISM
/*
class A{
    public:
    void sayHello(){
        cout<<"Hello Aayush."<<endl;
    }
    void sayHello(int x){
        cout<<"Hello Nitish. "<<x<<endl;
    }

};
int main(){
    A o1;
    o1.sayHello(9);
}*/
