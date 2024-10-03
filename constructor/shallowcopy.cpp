#include<bits/stdc++.h>
using namespace std;

// This store  address current member object
class Code{
    public:
    int rank=0;
    char *platform;
;    Code(){
        cout<<"Constructor call "<<endl;
        platform=new char[100];
    }
  
    void setplatform(char platform[]){
     strcpy(this->platform,platform);
    }
    void setrank(int rank){
        this->rank=rank;
    }
    void print()
    {
        cout<<"{ Rank : "<<rank <<" ,  Platform : "<<platform<<"}"<<endl;
    }
    
};
int main()
{
    Code adarsh;
    char s[]="leetcode";
    adarsh.setplatform(s);
    adarsh.setrank(3);
    

    Code adi(adarsh);
    // adi.print(); 

    adarsh.platform[0]='a';
    adarsh.print();
    adi.print();
    

    return 0;
}