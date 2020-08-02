// Permutation with Spaces
// Input:  str[] = "ABC"
// Output: (A B C)(A BC)(AB C)(ABC)

#include<iostream>
#include<string>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
// input output tree method
void permuation(string i,string o)
{
    if(i.empty())   // base conditon
    {
        cout<<o<<endl;
        return;
    }
    string op1=o;   //output 1
    string op2=o;   // output 2
    op2.push_back('_');
    op2.push_back(i[0]);
    op1.push_back(i[0]);
    i.erase(i.begin()+0);
    permuation(i,op1);  // recursive call on op1
    permuation(i,op2);  // recursive call on op2
    return;
}
int main(int argc, char const *argv[])
{
    string i="ABC";
    string o;
    o.push_back(i[0]);
    i.erase(i.begin()+0);
    permuation(i,o);   
    return 0;
}