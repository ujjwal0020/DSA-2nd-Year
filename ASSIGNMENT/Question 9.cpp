#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string s,m;
  cin>>s>>m;
  int i,j;
  i=s.size();
  j=m.size();
  cout<<i<<" "<<j<<endl;
  string n;
  n=s+m;
  cout<<n<<endl;
  string k;
  k=s[0];
  s[0]=m[0];
  m[0]=k[0];
  cout<<s<<" "<<m;
    return 0;
}
