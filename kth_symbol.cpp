/*
row 1: 0
row 2: 01
row 3: 0110
row 4: 01101001
*/
#include<iostream>
#include<math.h>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
int kthgrammer(int n,int k)
{
    if(n==1) return 0;
    int mid=(pow(2,n)-1)/2;
    if(k<=mid)
        return kthgrammer(n-1,k);
    else
        return !kthgrammer(n-1,mid-k);
 
}

int main(int argc, char const *argv[])
{
    int n=4,k=5;
    cout<<kthgrammer(n,k)<<endl;
    return 0;
}