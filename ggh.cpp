#include <bits/stdc++.h>
using namespace std;
int L(string g,int y,int f,int r,int c)
{y = y % 7;
//	cout << y << "$";cout << endl;
switch(y)
{
	case 0 : if(f>0)return (1 + L(g,(y+1),(f-1),r,c));
			 break;
	case 1 : if(r>0)return (1 + L(g,(y+1),f,(r-1),c));
		break;
	case 2 : if(c>0)return (1 + L(g,(y+1),f,r,(c-1)));
		break;
	case 3 : if(f>0)return (1+ L(g,(y+1),(f-1),r,c));
		break;
	case 4 :if(c>0) return (1+L(g,(y+1),f,r,(c-1)));
	       break;
	case 5 :if(r>0) return (1 + L(g,(y+1),f,(r-1),c));
		break;
	case 6 :if(f>0) return (1 + L(g,(y+1),(f-1),r,c));
		break;
	default : cout << "invalid" << endl;break;	

}
return 0;
}
int main()
{
//	cout << "pops" << endl;
int f,r,c;
cin >> f;cin >> r;cin >> c;
//cout << "grape" << endl;
//return 0;
string g = "frcfcrf";
int k = 0;
//cout << "gat" << endl;
for(int y=0;y<7;y++)
{
//	cout << "da" << " ";
int p = L(g,y,f,r,c);
if(p>k)k=p;
}
cout << k << endl;
return 0;
}
