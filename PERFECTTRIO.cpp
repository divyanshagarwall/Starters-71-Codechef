#include <bits/stdc++.h>
using namespace std;

int main() {
    int sss;
    cin>>sss;
    while(sss--){
        int q,w,r;
        cin>>q>>w>>r;
        if((q+w)==r || (q+r)==w || (w+r)==q)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
	// your code goes here
	return 0;
}
