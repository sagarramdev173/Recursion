#include<iostream>
#include<string>
#include<set>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void subset(string i,string o,set<string>& data)
{
    if(i.size()==0)
    {
        data.insert(o);
        return;
    }
    string op1=o;
    string op2=o;
    op2.push_back(i[0]);
    i.erase(i.begin()+0);   
    subset(i,op1,data); 
    subset(i,op2,data);
    return;
}

int main(int argc, char const *argv[])
{
    string i="aabc";
    string o;
    set<string> data;
    subset(i,o,data);
    for(string i:data)
        cout<<i<<endl;
    return 0;
}