#include<iostream>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void print(int a)
{
    if(a==1)    // base condition
    {
        cout<<a<<endl;
        return;        
    }
    print(a-1); //hypothesis
    cout<<a<<endl;  //induction step
    return;
}
void print_rev(int a)
{
    if(a==1)    //!base condition
    {
        cout<<a<<endl;
        return;        
    }
    cout<<a<<endl;  //!Induction step
    print_rev(a-1);   // !hypothesis (inputs are getting smaller) 
    return; 
}
int main(int argc, char const *argv[])
{
    int n=7;
    print(n);
    cout<<"printing rev"<<endl;
    print_rev(n);
    return 0;
}