#include<bits/stdc++.h>

using namespace std ;

int main()
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int t;
	cin >> t;
	
	while(t--)
	{
		int n= 0;
		int total =0 ;
		int arr[40];
		while(scanf("%d", &arr[n++]))
		{
			total += arr[n-1];

			if(getchar() == '\n')
				break;
		}


		if(total % 2 == 1)
		{
			cout << "NO\n" ; 
			continue;
		}

		else 
		{
			total /= 2;

			int dp[40][5000] ;
			memset(dp , 0 ,sizeof(dp));

			dp[0][0] = 1;

			 for(int i = 0; i <= total; ++i)
            {
                for(int j = 1; j < n; ++j)
                {
                    if(i == 0)
                        dp[j][i] = 1;
                    else
                        dp[j][i] = (dp[j - 1][i] | dp[j - 1][i - arr[j]]);
                }
            }
			if(dp[n-1][total])
				cout << "YES\n" ; 
			else 
				cout << "NO\n";
		}
	}
	return 0 ;
}