#include <iostream>
using namespace std;

int main() 
{
      int t;
	  cin>>t;
	while(t--)
	{
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int a = 7*x;
	    int b = (y*d+(7-d)*z);
	   cout<<max(a,b)<<endl;
	  }
	return 0;
}
