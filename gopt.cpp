#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;cin >> n;

	vector<int> v;

	for(int y=0;y<n;y++)
	{int x;cin >> x;v.push_back(x);}

	for(int y=0;y<n;y++)
	{v.push_back(v[y]);}

	int ll=0;
	int curl=0;

	int ff=0;

for(int y=0;y<2*n;y++)
{
if(v[y]==0){
if(ff==1){
if(curl>ll){
ll=curl;
}
curl=0;ff=0;
}
}
else {

curl++;ff=1;
}
}
if(ff==1){
if(curl>ll){
ll=curl;
}
curl=0;ff=0;
}
cout << ll << endl;

return 0;
}
