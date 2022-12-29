#include <bits/stdc++.h>
using namespace std;

int main() {
    int sss;
    cin>>sss;
    while(sss--){
        int x;
        cin>>x;
        int q[x], r[x];
        for(int w=0; w<x;w++)
        cin>>q[w];
        for(int w=0;w<x;w++)
        cin>>r[w];
        int tempry,answr;
        tempry=answr=0;
        for(int w=0; w<x; w++){
            if(q[w]!=0 && r[w]!=0)
            tempry++;
            else{
                answr=max(answr,tempry);
                tempry=0;
            }
        }
        answr=max(answr,tempry);
        cout<<answr<<"\n";
    }
	// your code goes here
	return 0;
}
