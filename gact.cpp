#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;int m;
cin >> n;cin >> m;

int ss=0;
int flg=-1;
if(m%n==0 && m>n){

m = m/n;
//cout << m << endl;
while(m>0)
{if(m%3!=0 && m%2!=0)break;
	if(m%3==0){
m=m/3;ss++;//cout << "da" << endl;
}
if(m%2 == 0)
{
m = m/2;ss++;//cout << "pa" << endl;
}}
if(m==1){flg=1;//cout << "kop" << endl;}
}
}

else if(m==n){flg=1;}
if(flg==-1)cout << "-1" << endl;
else if(flg==1)cout << ss << endl;

return 0;
}
