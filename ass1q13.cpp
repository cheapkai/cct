#include<bits/stdc++.h>
#define N 1000
typedef struct node {
int r,c,v;

}T;

int main()
{
int nz;int nj;
vector<T> q1;
T k;
vector<T> q2;
int a1,a2,b1,b2;
	cout << "Enter number of elements in matrix A... nz:" << endl;
        cin >> nz;

	int i=0;
	for(i=0;i<nz;i++)
	{
	cin >> k.r;
	cin >> k.c;
	cin >> k.v;
q1.push_back(k);
	}

   cout << "Enter number of elements in matrix B... nj:" << endl;
        cin >> nj;

        //int i=0;
        for(i=0;i<nj;i++)
        {
        cin >> k.r;
        cin >> k.c;
        cin >> k.v;
q2.push_back(k);
        }

	int j;
	int res[N][N] = {0};
	
for(i=0;i<nz;i++)
	for(j=0;j<nj;j++)
	{
	if(q1[i].c == q2[j].r)
	{
	res[q1[i].r][q2[j].c] += (q1[i].v*q2[j].v);
	}}



return 0;
}
