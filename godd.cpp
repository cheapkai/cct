#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;cin >> t;
while(t--)
{
int n;cin >> n;int k;cin >> k;
vector<int> v;
while(n--)
{
int x;cin >> x;
v.push_back(x);
}
sort(v.begin(),v.end());
int d = -1;int sss = -1;
for(int y=0;(y+k)<n;y++)
{
if((d == -1 || (d > (abs(((v[y]+v[y+k])/2)-v[y]))) || (d > (abs(((v[y]+v[y+k])/2)-v[y+k]))))sss = (v[y]+v[y+k])/2;

}

}

return 0;
}
