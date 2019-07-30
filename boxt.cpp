#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;cin >> n;
	while(n--)
	{
		string str1;cin >> str1;
		vector<int> v(26,0);

		for(int y=0;y<str1.size();y++)
		{
		v[str1[y]-97]++;
		}
	int flg=0;int cup=0;
int k=1;
for(int y=0;y<26;y++)
{
	if(flg==1 && (v[y]<=0) && (cup<str1.size())){k=-1;break;}
if(v[y]>0 && v[y]>1){k=-1;break;}
else if(v[y]>0 && v[y]==1){flg=1;cup++;}
}
if(k==1 && cup==str1.size())cout << "Yes" << endl;
else cout << "No" << endl;

	}

return 0;
}
