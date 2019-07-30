#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin >> t;
while(t--)
{
char arr[110];

int n;cin >> n;

cin >> arr;

int l = arr.length()

int a[110];
int top=0;//number of elements in stack
for(int y = 0;y<l;y++)
{
	int x;
	if(arr[y]=="<")x=-1;
	else if(arr[y]==">")x=1;
if(top == 0){
a[top++] = x;}
else {
if((a[top-1]==1) && (x==-1))top--;
else {
a[top++]=x;}}}
int h = 0;
int w = 0;
for(int y = 0;y<top;y++)
{ 
if(a[y]==1)h++;
else if(a[y]==-1)w++;
}



}

return 0;
}
