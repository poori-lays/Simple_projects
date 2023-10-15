#include<iostream>
using namespace std;

class binary{
    string s;

    public:
         void read_bin(void);
         void disp(void);
         void chk_bin(void);
         void ones_compliment(void);

};

void binary::read_bin(){
    cout<<"Enter binary no"<<endl;
    cin>>s;
}
void binary::chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if(!(s[i]=='0' || s[i]=='1')){
            cout<<"Number not binary";
            exit(0);
        }
    }
    
}
void binary::disp(){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<"\n";
    
}
void binary::ones_compliment(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1')s[i]='0';
        else s[i]='1';
    }
    
}

int main(){
    binary b;
    b.read_bin();
    b.chk_bin();
    b.disp();
    b.ones_compliment();
    b.disp();
}
