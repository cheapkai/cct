#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;cin >> n;
vector<int> v;

for(int y=0;y<n;y++)
{int x;cin >> x;v.push_back(x);}
int pr=0;
vector<char> v2;
int i=0;
int j = v.size() - 1;

while(i<=j)
{int d = (v[i]>v[j])?v[j]:v[i];
if((v[i]<=pr) && (v[j]<=pr)){
i=j+1;continue;
}

if((v[i]>pr) && (v[j]>pr)){
if(v[i]<v[j]){pr=v[i];i++;v2.push_back('L');}
else {pr=v[j];j--;v2.push_back('R');}}

else if(v[i]>pr){pr=v[i];i++;v2.push_back('L');}
else if(v[j]>pr){pr=v[j];j--;v2.push_back('R');}
}
cout << v2.size() << endl;
for(int y=0;y<v2.size();y++)
{
cout << v2[y] ;
}
cout << endl;
return 0;
}
