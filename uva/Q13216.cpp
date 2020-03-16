#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int t ;

	cin >> t;
	while(t--)
	{
		long long num ;
		cin >> num;

		if(num == 0)
		{
			cout << "1" << endl; 
			continue;
		}

		else if(num == 1)
		{
			cout << "66" << endl;
			continue;
		}

		else if(num == 2)
		{
			cout << "56" <<endl;
			continue;
		}

		else if(num % 5 == 3)
		{
			cout << "96" << endl;
			continue;
		}

		else if(num % 5 == 4)
		{
			cout << "36" << endl;
			continue;
		}

		else if(num % 5 == 0)
		{
			cout << "76" << endl;
			continue;
		}

		else if(num % 5 == 1)
		{
			cout << "16" << endl;
			continue;
		}

		else
		{
			cout << "56" << endl;
			continue;
		}

	}

	return 0 ;
}