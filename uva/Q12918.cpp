#include<bits/stdc++.h>

using namespace std;

int main()
{
	int Case;
	cin >> Case;
	while(Case--)
	{
		long long n,m;
		cin >> n >> m;
		long long temp =  ( 2*m-1 -n ) * n / 2 ;
		cout << temp << endl;
	}
}