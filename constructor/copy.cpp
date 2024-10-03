#include<bits/stdc++.h>
using namespace std;

// This store  address current member object
class Code{
    public:
    int rank=0;
    Code(){
        cout<<"Default Constructor call"<<endl;
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