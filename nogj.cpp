#include <bits/stdc++.h>

using namespace std;

int main()
{

int t;cin >> t;
while(t--)
{string b = "NO";
	int x;cin >> x;
string s;cin >> s;
for(int y = 0;y<s.size();y++)
{
if(s[y] == '8'){
if((s.size() - y)>=11)b = "YES";}}

cout << b << endl;
}
return 0;
}
