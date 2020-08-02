/*
Generate all Parentheses
For example, given n = 3, a solution set is:

"((()))", "(()())", "(())()", "()(())", "()()()"

*/
#include<iostream>
#include<string>
#include<vector>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void generate(string op,int open,int close,vector<string> &v)
{
    if (open ==0 && close == 0)
    {
        cout<<"im in"<<endl;
        v.push_back(op);
        return;
    } 
    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
        generate(op1,open-1,close,v);
    }
    if(close>open)
    {
        string op2=op;
        op2.push_back(')');
        generate(op2,open,close-1,v);
    }
    return;        
}
int main(int argc, char const *argv[])
{   
    int n=3;
    vector<string> v;
    string o="";        
    generate(o,n,n,v);
    for(string i:v)
        cout<<i<<endl;
    return 0;
}