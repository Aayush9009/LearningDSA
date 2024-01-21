#include<iostream>
using namespace std;
int main(){
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j=j+1;

        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+i+j-1;
           while(j<=n){
            cout<<ch<<" ";
            j=j+1;


        } cout<<endl;
        i=i+1;


    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch ='A'+i-1;
        while(j<=n){
            cout<<ch<<" ";
            j=j+1;

        }cout<<endl;
        i=i+1;
        
    }
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char ch ='A'+j-1;
        while(j<=n){
            cout<<ch<<" ";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
       
        while(j<=n){
            cout<<ch<<" ";
            ch =ch+1;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch ='A'+i-1;
        while(j<=n){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;

        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
       
        while(j<=n){
            char ch ='A'+i+j-2;
            cout<<ch<<" ";
            j=j+1;


        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch ='A'+i-1;
        while(j<=i){
            cout<<ch<<" ";
            j=j+1;
        }cout<<endl;
        i=i+1;

    }
    int n;
    cin>>n;
    int i=1;
    char ch ='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        char ch='A'+i-1;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='D'-i+1;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;

        }cout<<endl;
        i=i+1;

    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }int j=1;
        while(j<=n-i+1){
            cout<<i;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
   int n;
   cin>>n;
   int i=1;
   int value=1;
   while(i<=n){
    int space=1;
    while(space<=n-i){
        cout<<" ";
        space=space+1;
    }int j=1;
    while(j<=i){
        cout<<value;
        value=value+1;
        j=j+1;
    }cout<<endl;
    i=i+1;

   }
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int space=i-1;
    while(space){
        cout<<" ";
        space=space-1;
        
        }
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }cout<<endl;
        i=i+1;

   }*/
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }int j=1;
    while(j<=i){
        cout<<j;
        j=j+1;
    }int start=i-1;
    while(start){
        cout<<start;
        start=start-1;
        j=j+1;
    }cout<<endl;
    i=i+1;
   }
}
   /*
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j=j+1;
    }int star=1;
    while(star<=i-1){
        cout<<'*';
        star=star+1;
    }int zip=1;
    while(zip<=i-1){
        cout<<'*';
        zip=zip+1;
    }int t=1;
    int value=n-i+1;
    
    while(t<=n-i+1){
        cout<<value;
        value=value-1;
        t=t+1;

    }cout<<endl;
    i=i+1;
    

   }
   
  

}*/



    
    
     


    
