#include<iostream>
#include<stack>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
// stack<char> s_data;
void insert(stack<char> &a,char data)
{
    if(a.size()==0)
    {
        a.push(data);
        return;
    }
    char temp=a.top();
    a.pop();
    insert(a,data);
    a.push(temp);
    return;
}
void reverse_stack(stack<char>& a)
{
    if(a.size()==1)
        return;       
    char temp=a.top();
    a.pop();
    reverse_stack(a);
    insert(a,temp);
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
    cout<<"reversing the array"<<endl;
    reverse_stack(st);
    while(!st.empty())
    {
        char p=st.top();
        st.pop();
        cout<<p;
    }
    return 0;
}