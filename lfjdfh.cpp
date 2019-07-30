#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool iV(int a,int b,int c,int d)
{
    if((c<=a) && (c>=0))if((b>=0) && (b<=d))return true;
    
    return false;
}
void dfs(char arr[][10],int ar2[][10],int j,int i,string s,unordered_map<string , int>& m,int n,int op)
{
    ar2[j][i]=1;
    s = s + arr[j][i];
    if(m.find(s)==m.end()){int ghj=-1;}
    else if(m[s]==1){cout << s << " ";m[s]=2;}
    int a[] = {-1,-1,-1,0,0,1,1,1};
    int b[] = {-1,0,1,-1,1,-1,0,1};
    for(int y=0;y<8;y++)
    {
        if(iV(n,op,(j+a[y]),(i+b[y])))if(ar2[j+a[y]][i+b[y]]==0){
            dfs(arr,ar2,(j+a[y]),(i+b[y]),(s+arr[j][i]),m,n,op);
        }}
    ar2[j][i]=0;
    
}

int main() {
    int t;cin >> t;
    while(t--)
    {unordered_map<string , int> op;
        int k;cin >> k;string g;
        for(int y=0;y<k;y++)
        {cin >> g; op.insert({g,1});}
        char arr[10][10];
        int m;int n;cin >> m;cin >> n;
        for(int j=0;j<m;j++)
        for(int i=0;i<n;i++)
        {char h;cin >> h;arr[j][i] = h;}
        
        string s = "";
        int ar2[10][10]={0};
        for(int j=0;j<m;j++)
        for(int i=0;i<n;i++)
        {
            dfs(arr,ar2,j,i,s,op,m,n);
        }
    
        
    }
	//code
	return 0;
}