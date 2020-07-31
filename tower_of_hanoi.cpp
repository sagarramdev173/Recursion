#include<iostream>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void solve(int source,int destination,int helper,int no_of_plates)
{
    if(no_of_plates==1)
    {
        cout<<"noving plate "<<no_of_plates<<" from "<<source<<" to "<<destination<<endl;
        return;
    }
    solve(source,helper,destination,no_of_plates-1);
    cout<<"noving plate "<<no_of_plates<<"from "<<source<<" to "<<destination<<endl;
    solve(helper,destination,source,no_of_plates);
    return;

}

int main(int argc, char const *argv[])
{
    int no_of_plates=2;
    int source=1;
    int destination=3;
    int helper=2;
    solve(source,destination,helper,no_of_plates);
    return 0;
}