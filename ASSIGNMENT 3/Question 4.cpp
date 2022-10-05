#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long i;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    cout<<s;
    return 0;
}
