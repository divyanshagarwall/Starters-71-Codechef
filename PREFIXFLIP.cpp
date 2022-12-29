#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sss;
    cin>>sss;
    while(sss--)
    {
        int q,w;
        cin>>q>>w;
        string m;
        cin>>m;
        int s=0,h=0,answr=0,man01=INT_MAX;
        while(h<w-1&&h<q-1)
        {
            if(m[h]!=m[h+1])
            {
                answr++;
            }
            h++;
        }
        for(int z=w-1;z<q;z++)
        {
            if(z!=w-1)
            {
                int v=z-w;
                if(m[v]!=m[v+1])
                {
                    answr--;
                }
                int u=1-((int)(m[z]-'0'));
                man01=min(man01,answr+u);
                if(z<q-1)
                {
                    if(m[z]!=m[z+1])
                    {
                        answr++;
                    }
                }
            }
            else
            {
                int u=1-((int)(m[z]-'0'));
                man01=min(man01,answr+u);
                if(z<q-1)
                {
                    if(m[z]!=m[z+1])
                    {
                        answr++;
                    }
                }
            }
        }
        cout<<man01<<"\n";
    }
}