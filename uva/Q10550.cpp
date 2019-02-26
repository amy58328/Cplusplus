#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif 

	int s,a,b,c;
	while ( cin >> s >> a >> b >> c ) {
		if ( s+a+b+c == 0 ) break;
		int cost = 120;
		cost += (40+s-a)%40;
		cost += (40+b-a)%40;
		cost += (40+b-c)%40;
		cout << cost*9 << endl;
	}
	return 0;
}
