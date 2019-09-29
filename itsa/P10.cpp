#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int a, b;
	while(cin >> a>>b)
	{
		if(b > a)
		{
			int temp = a ;
			a = b;
			b = temp ;
		}
		while(1)
		{
			int temp = a / b;
			a = a - b * temp;
			if(a == 0 )
			{
				cout << b << endl;
				break;
			}

			temp = b / a ;
			b = b - a * temp ;
			if(b == 0)
			{
				cout << a << endl;
				break;
			}
		}
	}

	return 0 ;
}