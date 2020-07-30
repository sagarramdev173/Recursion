#include<iostream>
#include<vector>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void insert(vector<int> &a,int item)
{
    if(a.size()<=0 || a.back()<=item)
    {
        a.push_back(item);
        return;
    }    
    int data=a.back();
    a.pop_back();
    insert(a,item);
    a.push_back(data);
    return;    
}
void sort(vector<int> &a)
{
    if(a.size()==1)
        return;
    int item=a.back();
    a.pop_back();
    sort(a);
    insert(a,item);
    return;
}
int main(int argc, char const *argv[])
{
    vector<int> a={2, 3, 1, 6, 5, 4}; 
    sort(a);
   for(auto i:a)
        cout<<i<<endl;
    return 0;
}