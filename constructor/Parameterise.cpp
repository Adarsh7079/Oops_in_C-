#include<bits/stdc++.h>
using namespace std;

// This store  address current member object
class Code{
    private:
    int rank;

    public:
    string platform="null";

    Code(int rank){
        cout<<"Address:"<<this<<endl;
        cout<<"This is Parametrise Constructor"<<endl;
        this->rank=rank;
    }

    void print(){
        cout<<"Rank is : "<<rank<<endl;
    }

    int getrank(){
        return rank;
    }
    string get_platform(){
        return platform;
    }
    
    
};
int main()
{
    Code n(4);
    cout<<"Address of new :"<<&n<<endl;  

    return 0;
}