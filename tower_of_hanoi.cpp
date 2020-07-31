#include<iostream>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void solve(int source,int destination,int helper,int no_of_plates)
{
    if(no_of_plates==1) //base condition
    {
        cout<<"noving plate "<<no_of_plates<<" from "<<source<<" to "<<destination<<endl;
        no_of_plates--;
        return;
    }
    solve(source,helper,destination,no_of_plates-1);  // hypthesis
    cout<<"noving plate "<<no_of_plates<<"from "<<source<<" to "<<destination<<endl; //induction
    no_of_plates--;
    solve(helper,destination,source,no_of_plates); // induction
    return;

}

int main(int argc, char const *argv[])
{
    int no_of_plates=4;
    int source=1;
    int destination=3;
    int helper=2;
    solve(source,destination,helper,no_of_plates);
    return 0;
}