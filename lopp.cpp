#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void L(priority_queue<int>& pq,vector<int> * ae,vector<int>& in,vector<int>& ds)
{
    while(in[pq.top()])
}
int main() {
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int h=0;unordered_map<int , int> m;
        while(h<n)
        {int x;cin >> x;int y;cin >> y;
            m.insert({x,y});
            h++;
        }
        
        vector<int> * ae = new vector<int>[31];
        for(int y=1;y<=30;y++)
        {
            if(m.find(y)==m.end())
            {
                for(int j=y+1;((j<=y+6) && (j<=30));j++)
                {
                    if(m.find(j)==m.end())ae[y].push_back(j);
                    else ae[y].push_back(m[j]);
                }
            }
        }
        
        vector<int> in(31,-1);vector<int> ds(31,-1);
        in[1]=1;ds[1]=0;
        priority_queue<int> pq;
        L(pq,ae,in,ds);
        
        
    }
	//code
	return 0;
}