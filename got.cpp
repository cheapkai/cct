#include <bits/stdc++.h>
using namespace std;
int main()
{int n,m;int flg=-1;
	int k;cin >> k;
for(int y=5;y<=sqrt(k);y++)
{
if(k%y == 0 && (k/y)>=5){
flg=0;
n=y;m=k/y;
}
}
string a[5];
 a[0]= "aeiou";a[1]="eioua";a[2]="iouae";a[3]="ouaei";a[4]="uaeio";
string st ="";
if(flg==-1)cout << "-1" << endl;
else{

for(int jj = 0;jj<n;jj++)
{int f = (jj+1)%5;
st += a[f];
for(int jh = 5;jh<m;jh++)
{
if(f == 0)st += "a";
else if(f == 1)st += "e";
else if(f == 2)st += "i";
else if(f == 3)st += "o";
else if(f == 4)st += "u";
}
}
cout << st << endl;

}
return 0;
}
