/*#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[5]={2,5,1,6,4};

    array <int,4> a = {1,2,3,4};

    //Finding array size 
    int size = a.size();
    //Printing Array elements.
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2 index-> "<<a.at(2)<<endl;
    cout<<"Empty or not? "<<a.empty()<<endl;
    cout<<"First element-> "<<a.front()<<endl;
    cout<<"Last element-> "<<a.back()<<endl;
}*/

//-----------------------VECTOR----------------------x
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // Initially its size is 0.

    cout<<"Capacity-> "<<v.capacity()<<endl;

    //Adding element to the vector
    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd Index is "<<v.at(2)<<endl;

    cout<<"First element-> "<<v.front()<<endl;

    cout<<"Last element-> "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of vector before clearing-> "<<v.size()<<endl;
    v.clear();
    cout<<"Size of vector after clearing-> "<<v.size()<<endl;

    vector<int> a(5,1); // Another way of initialising a vector.
    //Size of vector a is 5 and every element is 1
    cout<<"Vector a elements-> ";
    int size1=a.size();
    for(int i=0;i<size1;i++){
        cout<<a[i]<<" ";
    }
}*/


//------------Deque(Doubly Ended Que)-------------------x
/*#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back(); 
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"\nPrint element at first index-> "<<d.at(1)<<endl;

    cout<<"Front-> "<<d.front()<<endl;
    cout<<"Back-> "<<d.back()<<endl;
    cout<<"Empty or not-> "<<d.empty()<<endl;
    cout<<"Before erase size-> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase size-> "<<d.size()<<endl;

}*/


//------LIST--------X
/*#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;  

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    l.erase(l.begin());
    cout<<endl; 
    cout<<"After Erase:- "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"\nSize of List = "<<l.size()<<endl;

    list<int> n(l); // Created a New List "n" containing list "l" content.
    for(int i:n){
        cout<<i<<" ";
    }

    list<int> p(5,100); // Created a List "p" containing 5 elements of value 100.
    cout<<endl;
    for(int i:p){
        cout<<i<<" ";
    }

    return 0;
}*/


//------STACK-------x
/*#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;

    s.push("Aayush");
    s.push("Kumar");
    s.push("Gupta");

    cout<<"Top Element-> "<<s.top()<<endl;

    s.pop();

    cout<<"Top Element after POP-> "<<s.top()<<endl;

    cout<<"Size of Stack-> "<<s.size()<<endl;

    cout<<"Stack Empty or not? "<<s.empty()<<endl;

    return 0;
}*/


//----------------QUEUE-------------X
/*#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<string> q;
    q.push("Aayush");
    q.push("Kumar");
    q.push("Gupta");

    cout<<"First Element to come out:- "<<q.front()<<endl;
    q.pop();
    cout<<"First Element to come out after pop:- "<<q.front()<<endl;
    cout<<"Size of Queue  after pop:- "<<q.size()<<endl;

    return 0;

}*/

//----------Priority QUEUE-------x
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //Max Heap
//     priority_queue<int> maxi;;
//     //Min Heap
//     priority_queue<int,vector<int>,greater<int> > mini;
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);
//     int n = maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }

//     mini.push(5);
//     mini.push(1);
//     mini.push(0);
//     mini.push(4);
//     mini.push(3);
//     int m = mini.size();
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
//     cout<<"\nKhaali Hai kya Bhai ?? "<<mini.empty()<<endl;

// } 

//------------SET------------x
/*#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int> s;
    s.insert(5);
    s.insert(5); // It consider 5 only one time.
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6); // Similarly it consider one time only.
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";
    }
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    cout<<"\nPrinting elements after erasing:-  ";
    for(auto i:s){
        cout<<i<<" ";
    }

    cout<<"\n5 is Present or not ? "<< s.count(5);

    set<int>:: iterator itr = s.find(5);
    cout<<"\nValue present at itr-> "<<*itr<<endl;
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" "; 
    }

    return 0;
}*/

//----------------MAP-------------x
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string> m;

//     m[1]="Aaysuh";
//     m[2]="Gupta";
//     m[13]="Kumar";
//     //m.insert({5,"Aditya"});
    
//     cout<<"Elements of Map before Erase:- "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     cout<<"\nIs -13 present ? (1->True) and (0->False) "<<m.count(-13)<<endl;

//     cout<<"\nElements of Map after Erase:- "<<endl;
//     m.erase(m.begin());
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

// }

//------------------STL Algorithm------------------x
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower Bound-> "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"Upper Bound-> "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a = 5;
    int b = 9;

    cout<<"Max of a and b -> "<<max(a,b)<<endl;
    cout<<"Min of a and b -> "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"New Values of a and b :- "<<a<<" "<<b<<endl;

    string s = "Aayush Gupta";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"Reverse String is -> "<<s<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"Vector after rotating is :- "<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    
    sort(v.begin(),v.end());
    cout<<"\nThe sorted vector is: -"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;
}

