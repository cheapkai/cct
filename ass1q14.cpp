#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#define N 1000
typedef struct node {
int r,c,v;

}T;

int main()
{
int nz;int nj;
vector<pair<int,int>>  d1;
vector<pair<int,int>> d2;
vector<int> e1;
vector<int> e2;
//T k;
//vector<T> q2;
int r1,a2,b1,b2;int r2;

	cout << "Enter number of elements in matrix A... nz:" << endl;
        cin >> nz;
	cout << "Enter number of rows in matrix A....r1" << endl;
	cin >> r1;

	int i=0;int x,y,z;
	for(i=0;i<nz;i++)
	{
	cin >> x;
	cin >> y;
d1.push_back((x,y));	
//q1.push_back(k);
	}

for(i=0;i<r1+1;i++){cin >> x;
e1.push_back(x);
}


   cout << "Enter number of elements in matrix B... nj:" << endl;
        cin >> nj;

	cout << "Enter number of rows in matrix A....r2" << endl;
	cin >> r2;
        //int i=0;
        for(i=0;i<nj;i++)
        {
  cin >> x;
  cin >> y;
  d2.push_back((x,y));
	}
	  	
for(i=0;i<r1+1;i++){cin >> x;
e2.push_back(x);
}

 int res[N][N]={0}; 
  	

int j,k,l;
for(i=0;i<r1;i++)
{
for(j=0;j<(e1[i+1]-e1[i]);j++)
{
int v  = d1[e1[i]-1+j].second;
int co = d1[e1[i]-1+j].first;

for(k=0;k<(e2[co-1+1]-e2[co-1]);k++)
{
int u = d2[e2[k]-1+k].second;
int cu = d2[e2[k]-1+k].first;
res[i][cu] += v*u;

}}}
/*

	int j;
	int res[N][N] = {0};
	
for(i=0;i<nz;i++)
	for(j=0;j<nj;j++)
	{
	if(q1[i].c == q2[j].r)
	{
	res[q1[i].r][q2[j].c] += (q1[i].v*q2[j].v);
	
	}}


*/
return 0;
}
