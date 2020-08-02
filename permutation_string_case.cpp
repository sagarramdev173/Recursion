// Permute a string by changing case
// Input : ABC
// Output : abc Abc aBc ABc abC AbC aBC ABC

#include<iostream>
#include<string>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void permuation(string i,string o)
{
    if(i.empty())
    {
        cout<<o<<endl;
        return;
    }
    string op1=o;
    string op2=o;
    op1.push_back(tolower(i[0]));
    op2.push_back(toupper(i[0]));
    i.erase(i.begin()+0);
    permuation(i,op1);
    permuation(i,op2);
    return;
}
int main(int argc, char const *argv[])
{
    string i="ABC";
    string o;
    permuation(i,o);
    return 0;
}