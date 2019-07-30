#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin >> n;

vector<int> v1;vector<int> v2;
int x;
int h =0;
while(h<n)
{cin >> x;
	v1.push_back(x);
h++;
}
h=0;
while(h<n)
{
	cin >> x;
	v2.push_back(x);
h++;
}
long long int sum=0;
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end(),greater<int>());
vector<long int> cm;
cm.push_back(v1[0]*v2[0]);
for(int y = 1;y<n;y++)
{cm.push_back(cm[y-1]+(v1[y]*v2[y]));}
for(int y=0;y<n;y++)
for(int i=0;i<=y;i++)
{sum += cm[y];if(i>0)sum -= cm[i-1];}
cout << (sum%998244353) << endl;
return 0;
}
