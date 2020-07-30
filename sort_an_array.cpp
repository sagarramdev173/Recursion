
#include<iostream>
#include<vector>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
void insert(vector<int> &a,int item)
{
    if(a.size()<=0 || a.back()<=item) //base condition
    {
        a.push_back(item);
        return;
    }    
    int data=a.back();
    a.pop_back();
    insert(a,item); //hypothesis
    a.push_back(data); //induction
    return;    
}
void sort(vector<int> &a)
{
    if(a.size()==1) // base case
        return;
    int item=a.back();
    a.pop_back();
    sort(a); //hypothesis
    insert(a,item);//induction
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
// #include<iostream>
// #define fo(i,n) for(int i=0;i<=n;i++)
// using namespace std;
// void insert(int a[],int size,int item)
// {
//     if(size==0)
//         a[size]=item;
//     if(a[size]>item)
//     {
//        int l=a[size]; 
//        insert(a,size-1,item);
//        a[size]=l;  
//        return;  
//     }
//     else
//     {
//         a[size]=item;
//         return;
//     }
    
// }
// void sort(int a[],int size)
// {

//     if(size==0)
//         return;
//     int l=a[size];
//     sort(a,size-1);
//     // insert(a,size,l);
//     fo(i,size)
//     {
//         if(a[size]<l)
//         {
//              swap(a[size],l);
//         }              
//     }
//     return;

// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {2, 3, 1, 6, 5, 4}; 
      
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     sort(arr,n-1);
//     fo(i,n-1)
//         cout<<arr[i]<<"\t";
//     return 0;
// }

