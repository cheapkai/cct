#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;cin >> n;

vector<int> v1;vector<int> v2;

for(int y=0;y<n;y++)
{
	int x;cin >> x;int ss=0;
	while(x>0){ss += (x&1);
	x=x>>1;
	}
	cout << ss << " ";cout << x << endl;
if(ss%2==0)v1.push_back(x);
else v2.push_back(x);}

sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());
long int sum=0;
if(v1.size() > v2.size())
{for(int y=0;y<=(v1.size()-1);y++)
{//if(i==v1.end())continue;
	sum += v1[y];
cout << "p" << " ";cout << sum << endl;
}}
	else if(v2.size()>v1.size()){for(int y=0;y<=(v1.size()-1);y++)
{//if(i==v2.end())continue;
	sum += v2[y];}
	cout << "d" << " ";cout << sum << endl;
	}

cout << sum << endl;

return 0;
}
