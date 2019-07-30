#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void pr(int L[][101],int n,int m)
{
    for(int y=0;y<=n;y++)
    for(int j=0;j<=m;j++)
    cout << L[y][j] << " ";
    
    cout << endl;
}
void lcs(string str1,string str2,int n,int m,int L[][101])
{
    pr(L,4,5);
    cout << n << " ";cout << m << endl;
    if(n<0 || m<0)return;
    if(n==0 || m==0){L[n][m]=0;return;}
    if(L[n][m]!=-1)return;
    if(str1[n-1]==str2[m-1]){
        if(L[n-1][m-1]==-1)
        lcs(str1,str2,n-1,m-1,L);
    L[n][m] = 1 + L[n-1][m-1];cout << n << " ";cout << m << endl;
    cout << "update" << " ";cout << L[n][m] << endl;
    return;}
    if(L[n-1][m]==-1)
    lcs(str1,str2,n-1,m,L);
    if(L[m-1][n]==-1)
    lcs(str1,str2,n,m-1,L);
    L[n][m] = 1 + ((L[n-1][m]>L[n][m-1])?L[n-1][m]:L[n][m-1]);
    cout << n << " ";cout << m << endl;
    cout << "update" << " ";cout << L[n][m] << endl;
    cout << "da" << " ";
    cout << L[n][m] << endl;
return;}

int main() {
    int t;cin >> t;
    while(t--)
    {int yu;int yh;cin >> yu;cin >> yh;
    string str1;cin >> str1;string str2;cin >> str2;
    int n = str1.size();int m = str2.size();
    int L[101][101];
    for(int y=0;y<101;y++)
    for(int j=0;j<101;j++)
    L[y][j]=-1;
    lcs(str1,str2,n,m,L);   
    int mm = L[n][m];int an = abs(n-mm);int am = abs(m-mm);
    cout << L[n][m] << " ";
    pr(L,n,m);
    int ars = (an>am)?an:am;
    cout << ars << endl;}
	return 0;}