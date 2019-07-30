#include <bits/stdc++.h>

using namespace std;

int main()
{
queue<int> s1;stack<int> s2;
int n;cin >> n;

vector<int> v;
for(int y=0;y<n;y++)
{int gx;cin >> gx;v.push_back(gx);}
sort(v.begin(),v.end());
int flg=1;
for(int y=0;y<v.size();y++)
{
if(s1.empty())s1.push(v[y]);
else if(s1.back()<v[y])s1.push(v[y]);
else if(s2.empty())s2.push(v[y]);
else if(s2.top()<v[y])s2.push(v[y]);
else {flg=-1;break;}
}
if(flg==-1)cout << "NO" << endl;

else if(flg==1)
{
	cout << "YES" << endl;
cout << s1.size() << endl;

while(!s1.empty()){cout << s1.front() << " ";s1.pop();}
cout << endl;
cout << s2.size() << endl;
while(!s2.empty())
{cout << s2.top() << " ";s2.pop();}
cout << endl;
}

return 0;
}
