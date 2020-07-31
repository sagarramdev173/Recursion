#include<iostream>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
// input output methodology to solve 
void subset(string input,string output)
{
    if(input.size()==0) // base condition
    {
        std::cout<<output << endl;
        return;
    }
    string op1=output;  //output one 
    string op2=output;  //output two
    op2.push_back(input[0]);
    input.erase(input.begin()+0);   
    subset(input,op1); 
    subset(input,op2);
    return;
}
int main(int argc, char const *argv[])
{
    string input="abc";
    string output;
    subset(input,output);
    return 0;
}