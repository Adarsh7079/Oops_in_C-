#include<bits/stdc++.h>
using namespace std;


class code{

    private:
    int c=0;
    // Public can be access from out of class 
    public:
    int a=10;
};
int main()
{
    code ob1;
    // accessing public 
    cout<<ob1.a;

    // cant not access private out of class
   // cout<<ob1.c<<endl; // throw error 
    return 0;
}