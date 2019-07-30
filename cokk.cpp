#include <bits/stdc++.h>

using namespace std;
int main()
{
int n;cin >> n;

string b;
cin >> b;

int l = b.length();
int c=0;
int pile=0;int minc=0;

for(int y=0;y<l;y++)
{
if(b[y] == '+'){minc++;pile++;}

else {
if(b[y] == '-'){
if(pile == 0)
{	c++;minc--;}
else {
pile--;minc--;
}}}}
:x







:x
cout << ans << endl;
return 0;
}
