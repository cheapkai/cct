#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
int n;

cin >> n;

int k = n;
int a[100100];
k = 0;int o = 0;
int z=0;int max = -1;
while(k<n)
{
  cin >> a[k];
if(z==0){max=a[k];z=1;}
if(z==1){if(a[k]>=max)max=a[k];}

  if(max == (k+1)){o++;z=0;}
  k++;
}

cout << o << endl;

return 0;
}
