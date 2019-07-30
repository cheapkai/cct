#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;cin >> n;

long int arr[300010];

long int x = 1000000080; 
int h = 0;
int y;
int w;int u;int o;
while(h<n)
{
	cin >> y;
if(h==(n-1))w = y;
if(h==0)u = y;

if(y<x){
x = y;
o = h;
}

h++;
}

int ae = floor((min(w,u)/(n-1)));

int f = max(abs(o-(n-1)),abs(o-0));

int er = floor((x/f));

int g = min(ae,er);

cout << g << endl;
return 0;
}
