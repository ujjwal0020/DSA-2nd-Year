#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0;
     for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    cout<<s;
    
    
}
