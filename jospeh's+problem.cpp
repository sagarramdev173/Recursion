#include<iostream>
#include<string>
#include<vector>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
// Uisng IBH method
void solve(int index,int k,vector<int> &v,int &ans)
{
    if(v.size()==1)     //base condition
    {
        ans=v[0];
        return;
    }
    index=(index+k)%v.size();   // calculating the index of the men who is going to die,to make the input smaller
    v.erase(v.begin()+index);  
    solve(index,k,v,ans); //hypothesis
    return;
}
int main(int argc, char const *argv[])
{
    int n=40;
    int k=7;
    int a=-1;
    int index=0;
    vector<int> v(n,0) ;
    for(int i=0;i<n;++i)
        v[i]=i+1;
    solve(index,k-1,v,a);   
    cout<<a<<endl; 
    return 0;
}