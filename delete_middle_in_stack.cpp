#include<iostream>
#include<stack>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void deletmid(stack<char> &a,int mid)
{
    if(!a.size()||a.size()==mid)
    {
        // cout<<"poping item="<<a.top()<<endl;
        a.pop();
        return;
    }
    char data=a.top();
    a.pop();
    deletmid(a,mid);
    a.push(data);
    return;
}
int main(int argc, char const *argv[])
{
     stack<char> st;  
    //push elements into the stack 
    st.push('1'); 
    st.push('2'); 
    st.push('3'); 
    st.push('4'); 
    st.push('5'); 
    st.push('6'); 
    st.push('7');
    int mid=(st.size()/2)+1; 
    // cout<<"mid="<<mid<<endl;
    deletmid(st,mid);
    while(!st.empty())
    {
        char p=st.top();
        st.pop();
        cout<<p<<endl;
    }
    return 0;
}