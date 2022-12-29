#include <bits/stdc++.h>
using namespace std;

int main() {
    int sss;
    cin>>sss;
    while(sss--){
        int w;
        cin>>w;
        int q[w];
        map<int, int>mps;
        for(int i=0; i<w; i++){
            cin>>q[i];
            mps[q[i]]++;
        }
        int tempry=1;
        for(auto it:mps){
            if(it.second%2!=0){
                cout<<"NO"<<"\n";
                tempry=0;
                break;
            }
        }
        if(tempry)
        cout<<"YES"<<"\n";
    }
	// your code goes here
	return 0;
}
