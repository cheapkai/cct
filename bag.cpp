#include <bits/stdc++.h>

using namespace std;
typedef struct T{
char a;char b;
}T;
int main()
{
vector<stack<char>> v1(27);

vector<stack<char>> v2(27);

string s1;string s2;int dd;cin>>dd;

for(int y=0;y<s1.size();y++)
{
if(((int)s1[y] >= 97) && ((int)s1[y] <= 122)){
	v1[(int)s1[y]-97].push(s1[y]);
}  
else if(s1[y] == '?')v1[26].push(s1[y]);

}

for(int y=0;y<s2.size();y++)
{
if(((int)s2[y] >= 97) && ((int)s2[y] <= 122)){
v2[(int)s2[y] - 97].push(s2[y]);
}
else if(s2[y] == '?')v2[26].push(s2[y]);
}
int l1=0;int l2=0;
//l1= v1[26].size();l2=v2[26].size();
vector<T> vu;int lum=0;
for(int y=0;y<26;y++)
{
//int m1 = v1[y].size();int m2 = v2[y].size();
//int m3 = (m1>m2)?m2:m1;
while(!v1[y].empty() && !v2[y].empty())
{
vu.push_back({v1[y].top(),v2[y].top()});
lum++;
v1[y].pop();v2[y].pop();

}
while(!v1[y].empty() && !v2[26].empty())
{
lum++;
vu.push_back({v1[y].top(),v2[26].top()});
v1[y].pop();v2[26].pop();
}
while(!v1[26].empty() && !v2[y].empty())
{
lum++;
vu.push_back({v1[26].top(),v2[y].top()});
v1[26].pop();v2[y].pop();
}


}
cout << lum << endl;
for(int y=0;y<vu.size();y++)
{
cout << vu[y].a << " ";cout << vu[y].b << endl;
}

return 0;
}
