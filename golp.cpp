
#include <bits/stdc++.h>

using namespace std;
int L(int n)
{
int a = n;
int s = 0;
//int s=0;
//int ans=0;
while(a>0)
{s += a%10;a = a / 10;}
int m = s % 4;int ans=0;
switch(m)
{
        case 0 : ans = n;break;
        case 1 : ans = n + 3;ans = L(ans);break;
        case 2 : ans = n + 2;ans = L(ans);break;
        case 3 : ans = n + 1;ans = L(ans);break;
        default : break;}
	return ans;
	}
int main()
{
int a;cin >> a;

int n = a;
int s=0;
while(a>0)
{
s += a%10;
a = a / 10;
}

int m = s % 4;
int ans=0;
switch(m)
{
	case 0 : ans = n;break;
	case 1 : ans = n + 3;ans = L(ans);break;
	case 2 : ans = n + 2;ans = L(ans);break;
	case 3 : ans = n + 1;ans = L(ans);break;
	default : break;

}
cout << ans << endl;
return 0;
}
