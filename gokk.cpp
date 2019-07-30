#include <bits/stdc++.h>

using namespace std;

int main()
{

int n,x,y;
cin >> n;cin >> x;cin >> y;
string s;
cin >> s;

int j = s.size() - 1;

int h = 0;
int c = 0;
while(h<x)
{
if(h==y && s[j]!='1')c++;
else if(h!=y && s[j]!='0')c++;

j--;
h++;
}
cout << c << endl;
return 0;

}
