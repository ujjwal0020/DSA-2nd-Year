#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    float s=0,k=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            k++;
        }
        if(a[i]<0)
        {
            s++;
        }
        if(a[i]==0)
        {
            m++;
        }
        
    }
    cout<<k/n<<endl<<s/n<<endl<<m/n;
}
