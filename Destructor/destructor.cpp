#include<bits/stdc++.h>
using namespace std;

// This store  address current member object
class Code{
    public:
    int rank=0;
    Code(){
        cout<<"Default Constructor call"<<endl;
    }

    ~Code(){
        cout<<"Destructor call"<<endl;
    }
};
int main()
{
    Code adarsh;

    Code *a=new Code();  //it will not call destructor wewe have to call 
    delete a;

    return 0;
}