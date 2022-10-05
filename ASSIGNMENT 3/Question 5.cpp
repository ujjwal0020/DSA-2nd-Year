#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int s=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j){
                s+=a[i][j];
            }
            if((i+j)==(n-1))
            {
                k+=a[i][j];
            }
            
        }
    }
    int u;
    u=abs(s-k);
    cout<<u;
   
}
