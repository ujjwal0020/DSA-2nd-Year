#include<iostream>
using namespace std;
int main()
{
    int n;
    int k;
    int p=0,r;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    { 
        for(int j=i+1;j<n;j++)
        {
           r=a[i]+a[j]; 
        if(r%k==0){
            p++;}
        }
    }
    cout<<p;
}
