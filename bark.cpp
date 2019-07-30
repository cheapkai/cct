#include <bits/stdc++.h>

using namespace std;

int main()
{

int t;cin >> t;
while(t--)
{
int n;cin >> n;
unordered_map<int , int> m;
for(int y=0;y<n;y++)
{
int x;cin >> x;
if(m.find(x)==m.end()){
m.insert({x,1});

}
else m[x]++;
}
vector<int> v;
for(auto i : m)
{
v.push_back(i.second);
}
sort(v.begin(),v.end());

int g = (*(v.rbegin()));
g += 1;
int sum=0;
for(auto i = v.rbegin();i!=v.rend();i++)
{
if((*i) >= g){sum += (g-1);g = g-1;}
else {
sum += (*i);g = (*i);
}
}
cout << sum << endl;	
}

return 0;
}
