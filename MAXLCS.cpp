#include <bits/stdc++.h>
using namespace std;

int main() {
    int sss;
    cin>>sss;
    while(sss--){
        int q;
	    cin>>q;
	    string z; cin>>z;
	    string u=z;
	    reverse(z.begin(), z.end());
	  vector<vector<int>>arr01(q+1, vector<int>(q+1, 0));
	    for(int p=1; p<=q; p++){
	        for(int o=1; o<=q; o++){
	            if(z[o-1]!=u[p-1])
	            arr01[p][o]=max(arr01[p][o-1], arr01[p-1][o]);
	            else
	            arr01[p][o]=arr01[p-1][o-1]+1;
	        }
	    }
	    int ans = arr01[q][q]/2;
	    cout<<ans<<"\n";
    }
	// your code goes here
	return 0;
}
