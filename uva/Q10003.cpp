#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<stack>

#define loop(i,n) for(int i=0;i<n;i++) 

using namespace std;

int len ; 
int n;
int cut[100];
int cost[1001][1001];

int dp(int l, int r)
{
	bool check = 0;

	if(cost[l][r] != 1e9)
		return cost[l][r];

	for(int i=0 ; i<n ; i++)
	{
		if(cut[i] > l && cut[i] < r)
		{
			check = 1;
			cost[l][r] = min(cost[l][r] , dp(l,cut[i]) + dp(cut[i] , r) + r - l);
		}
	}

	if(check == 0)
		cost[l][r] = 0;

	return cost[l][r];
}

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	while(~scanf("%d",&len))
	{
		if(len == 0)
			break;
		cin >> n ;
		for(int i=0 ; i<n ; i++)
			cin >> cut[i];

		for(int i=0 ; i<1001 ; i++)
			for(int j=0 ; j<1001 ; j++)
				cost[i][j] = 1e9;

		int ans = dp(0,len);

		printf("The minimum cutting is %d.\n",ans );
	}

}
