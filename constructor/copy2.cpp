#include<bits/stdc++.h>
using namespace std;

// This store  address current member object
class Code{
    public:
    int rank=0;
    Code(){
        cout<<"Default Constructor call"<<endl;
    }
//Copy constructor
// why Codee as refrence ? because when create object we call copy construtor it will put value and put call 
// by constructor again call value and controctor like that it will stuck in infinite loop

    Code(Code& temp){
        cout<<"copy call"<<endl;
        this->rank=temp.rank;
    }
    Code(int rank){
        this->rank=rank;
       cout<<"Parametrise Constructor call"<<endl;
    }

    void print(){
        cout<<"Rank is : "<<this->rank<<endl;
    }    
    
};
int main()
{
    Code adarsh(3);
    adarsh.print();
    Code adi(adarsh);
    adi.print();
    // adi.rank=adarsh.rank;

    return 0;
}



// default copy constructor create sallow copy it mean same memory access using diffrent name
// deep copy create one copy it achieve using copy constructor 