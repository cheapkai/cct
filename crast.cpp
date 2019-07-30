#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef struct T {
   int ds;int u;
   
    
}T;
struct cm{
    bool operator()(T const& a,T const& b){
     return (a.ds > b.ds);   
    } 
};
void L(priority_queue<T,vector<T>,cm>& pq,vector<int> * ae,vector<int>& in,vector<int>& ds)
{
    while(!pq.empty() && in[pq.top().u]==1)
    {
        pq.pop();
    }
    if(!pq.empty()){
        //cout << pq.top().u << " ";cout << pq.top().ds << endl;
        in[pq.top().u]=1;
    vector<int> k = ae[pq.top().u];
        for(auto i : k)
        {if(in[i]!=1){
            ds[i] = ds[pq.top().u]+1;
            T r;r.ds = ds[i];r.u = i;
      //      cout << r.u << " ";cout << r.ds << endl;
            pq.push(r);
        }}
    
        pq.pop();
    //_Exit(0);
    L(pq,ae,in,ds);
  //  cout << ds[30] << endl;
    }
}
void pL(vector<int>& a)
{
for(auto k = a.begin();k!=a.end();k++)
{
 cout << *k << " ";   
}
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
        
        //for(int j=1;j<=30;j++)
        //{
            //cout << j << endl;
            //pL(ae[j]);cout << endl;
        //}
        //_Exit(0);
        vector<int> in(31,-1);vector<int> ds(31,-1);
       // cout << (bool)in.empty() << endl;
        //cout << (bool)ds.empty() << endl;
       // _Exit(0);
       /*
        for(auto i : ds){
            cout << "kap" << endl;
        cout << i << " ";}
        _Exit(0);*/
        in[1]=-1;ds[1]=0;
        /* for(auto i : ds){
            cout << "kap" << endl;
        cout << i << " ";}
        _Exit(0);*/
        priority_queue<T,vector<T>,cm> pq;
        pq.push({10,5});
        pq.push({1,4});
        pq.push({5,3});
        pq.push({7,2});
        pq.push({8,1});
        while(!pq.empty()){//cout << pq.top().u << endl;
        pq.pop();}
        //_Exit(0);
        pq.push({ds[1],1});
        L(pq,ae,in,ds);
        
    cout << ds[30] << endl;    
    }
	//code
	return 0;
}