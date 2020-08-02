/*
 Letter Case Permutation
Examples:
Input: S = "a1b2"
Output: ["a1b2", "a1B2", "A1b2", "A1B2"]
 */

#include<iostream>
#include<vector>
#include<string>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void solve(string i, string o,vector<string>& v)
{
    if(i.empty())
    {
        v.push_back(o);
        return;
    }
    if(isalpha(i[0]))
    {
        string op1=o;
        string op2=o;
        op1.push_back(tolower(i[0]));
        op2.push_back(toupper(i[0]));
        i.erase(i.begin()+0);
        solve(i,op1,v);
        solve(i,op2,v);
    }
    else
    {
        string op=o;
        op.push_back(i[0]);
         i.erase(i.begin()+0);
          solve(i,op,v);
    }
    return;
}

int main(int argc, char const *argv[])
{
    string i="a1b2";
    string o;
    vector<string> v;
    solve(i,o,v);
    for(string i:v)
        cout<<i<<endl;
    return 0;
}