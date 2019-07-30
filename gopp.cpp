#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;vector<int> ve;cin >> n;
int h=0;int x;
while(h<n)
{
cin >> x;
ve.push_back(x);
h++;
}

sort(ve.begin(),ve.end());

int k = 0;
for(int y=0;y<ve.size();y++)
{
if(ve[y]>=(k+1))k++;
}
cout << k << endl;
return 0;
}
