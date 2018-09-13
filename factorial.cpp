#include<iostream>

using namespace std;

int main()
{
	int n;
	int all=1;
	int sum;

	cin >> n;

	for(int i=1;i<=n;i++)
	{
		all=all*i;

		while(all%10 ==0)
		{
			all=all/10;
		}

		all=all%100;
	}

	cout << all%10;

	return 0;
}