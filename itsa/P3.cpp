#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int x ,y;
	while(cin >> x>> y)
	{
		double length = sqrt(x*x + y*y);
		if(length <= 200)
		{
			cout << "inside" << endl;
		}

		else
		{
			cout << "outside" << endl;
		}
	}
}