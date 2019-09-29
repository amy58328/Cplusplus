#include<bits/stdc++.h>
#define N 33000

using namespace std ; 

int ans[N];

void find()
{
	ans[0] = 1;
	ans[1] = 2;
	for(int i=2 ; i<N ; i++)
	{
		int temp = i/2;
		ans[i] = ans[i-1] + ans[temp];
	}
}

int main()
{
	int n;
	find();
	while(cin >> n)
	{
		cout << ans[n] << endl;
	}
}