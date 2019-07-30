#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int L(vector<int>& v,int a1,int a2,unordered_map<int,int>& m,int b1,int b2)
{/*
    for(auto i : m)
    {
        cout << i.first << " ";cout << i.second << " ";
    }*/
    //return 0;
    if(a1==a2){cout << v[a1] << " ";cout << "leaf" << endl;return 1;}
    if(a1>a2)return 0;
    //cout << v[a1] << endl;
    //cout << m[v[a1]] << endl;
    int ll = m[v[a1]];
    ll = ll-b1+1;
    int tt = a2-a1 + 1;int bb = tt-ll;
    //cout << a1+1 << " ";cout << a1+ll << " "; cout << a1+ll+1 << " ";cout << a2 << endl;
    return (L(v,a1+1,a1+ll,m,b1,m[v[a1]]-1) + L(v,a1+ll+1,a2,m,m[v[a1]]+1,b2));
    
    
}
int main() {
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        vector<int> v;
        int h=0;
        while(h<n)
        {
            int x;cin >> x;
            v.push_back(x);
            h++;
        }
        vector<int> a;a = v;
        sort(a.begin(),a.end());
        unordered_map<int , int> m;
        for(int y=0;y<n;y++)
        {m.insert({a[y],y});}//cout << m[a[y]] << endl;}
       /*
        for(auto i : m)
        {
            cout << i.first << " ";cout << i.second << endl;
        }
        return 0;*/
       // cout << m[767] << endl;
        int ans = L(v,0,n-1,m,0,n-1);
        cout << endl;
    }
	//code
	return 0;
}