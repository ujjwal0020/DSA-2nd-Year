#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        int ele; cin>>ele;
	        a[i]=ele;
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]>k){
	            count++;
	        }
	    }cout<<count<<endl;
	    
	}
	return 0;
}
