/*
    Print N-bit binary numbers having more 1’s than 0’s
    numbers having more 1’s than 0’s for any prefix
    Input:
    n=3
    Output:
    111 110 101
*/

#include<iostream>
#include<string>
#include<vector>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void solve(int n,int one,int zero,vector<string> &v,string op)
{
    if(n==0)
    {
        v.push_back(op);
        return;
    }
    string op1=op;
    op1.push_back('1');
    solve(n-1,one+1,zero,v,op1);
    if(one>zero)
    {
        string op2=op;
        op2.push_back('0');
        solve(n-1,one,zero+1,v,op2);
    }
    return;
}
int main(int argc, char const *argv[])
{
    int n=3;
    int one=0;
    int zero=0;
    vector<string> v;
    string op="";
    solve(n,one,zero,v,op);
    for(string i:v)
        cout<<i<<endl;
    return 0;
}