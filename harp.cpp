#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;cin >> n;
int min = 101;int max = -1;
vector<int> v;
for(int y=0;y<n;y++)
{
int p;cin >> p;
v.push_back(p);
if(p>max)max = p;
if(p<min)min=p;
}

int g = abs(max - min);
//cout << max << " ";cout << min << " ";cout << g << " ";

if((g % 2) == 0){g = g/2;g = max - g;}
else g = min;
//cout << max << " ";cout << min << " ";cout << g << " ";
//cout << "da" << endl;
int flg=1;
for(auto i : v)
{
if(!((i==g) || (i==min) || (i==max))){flg=-1;break;}
}

if(flg==1)cout << abs(max - g) << endl;
else cout << -1 << endl;

return 0;
}
