#include <bits/stdc++.h>

using namespace std;

long long int lcm(int a,long long int b)
{

long long int ge = 1;
int r = a;long long int j = b;
while(a!=b)
{
if(a>b)a=a-b;
else if(b>a)b=b-a;
}
ge = a;
long long hc = (r*j)/ge;
return hc;
}
int main()
{int t;cin >> t;
	while(t--)
	{vector<int> ve;int n;cin >> n;int h = 0;
long long int ans = 1;int x;
while(h<n)
{cin >> x;if(ans%x !=0){
	//cout << ans << " ";cout << x << endl;
	ans = lcm(x,ans);
	if(ans == x)ans *= 2;	       
		       }
	
	h++;}
cout << ans << endl;
}
return 0;
}
