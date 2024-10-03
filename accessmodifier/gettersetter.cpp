#include<bits/stdc++.h>
using namespace std;
class Code{
    private:
    int rank;

    public:
    string platform="null";

    void print(){
        cout<<"Rank is : "<<rank<<endl;
    }

    int getrank(){
        return rank;
    }
    string get_platform(){
        return platform;
    }
    void setrank(int r){
      rank=r;
    }
    void setplatform(string f){
        platform=f;
    }
    
};
int main()
{
    Code adarsh;
    cout<<"Get Plafromr: "<<adarsh.get_platform()<<endl;
    // Ste adarsh
    adarsh.setplatform("Leetcode");
    adarsh.setrank(3);
    cout<<"Platfrom of Adarsh :"<<adarsh.get_platform()<<endl;
    cout<<"Rank of Adarsh :"<<adarsh.getrank()<<endl;
    return 0;
}