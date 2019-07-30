#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a,b,c,d;
	cin >> a;cin >> b;cin >> c; cin >> d;

	int e = ((a>b)?((a>c)?((a>d)?1:4):((c>d)?3:4)):((b>c)?((b>d)?2:4):((c>d)?3:4)));


	switch(e)
	{
		case 1 : cout << abs(a-b) << " ";cout << abs(a-c) << " ";cout << abs(a-d) << " ";break;
		case 2 : cout << abs(b-a) << " ";cout << abs(b-d) << " ";cout << abs(b-c) << " ";break;
		case 3 : cout << abs(c-a) << " ";cout << abs(c-b) << " ";cout << abs(c-d) << " ";break;
		case 4 : cout << abs(d-a) << " ";cout << abs(d-b) << " ";cout << abs(d-c) << " ";break;
		default : break;	 
	}
//cout << abs(e-a) << " ";cout << abs(e-b) << " ";cout << abs(e-c) << " ";
cout << endl;

return 0;
}
