#include<iostream>
using namespace std;
int main()
{
    int n,s,k,r;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=38)
        {
        k=a[i]/5;
        s=k+1;
        r=s*5;
        if(r-a[i]<3)
        {
            cout<<r<<endl;
        }
           else {
           cout<<a[i]<<endl;
           } 
        }
        if(a[i]<38)
        {
            cout<<a[i]<<endl;
        }
    }
    
}
