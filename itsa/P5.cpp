#include<bits/stdc++.h>

using namespace std ;

int ans[8];

void bin(int n)
{
	int temp = 0;
	while(n>0)
	{
		ans[temp] = n % 2;
		temp ++;
		n /= 2;
	}

}

void init()
{
	for(int i=0 ; i<8 ; i++)
	{
		ans[i] = 0;
	}
}

int main()
{
	int n;
	while(cin >>n)
	{
		init();

		if(n < 0 )
		{
			n = 128 + n ;
			ans[7] = 1;
		}

		bin(n);
		
		for(int i=7 ; i>=0 ; i--)
		{
			cout << ans[i] ;
		}

		cout << endl ;
	}
}
