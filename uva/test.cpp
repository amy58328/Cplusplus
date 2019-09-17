#include<bits/stdc++.h>

using namespace std ;


int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int n;
	int t=0;
	while(cin >>n)
	{
		t++;
		int num[n];
		for(int i=0 ; i<n ;i++)
			cin >> num[i];

		long long ans = -10000;

		for(int i=0 ; i<n ; i++)
		{
			long long sum = num[i];
			if(sum >ans )
				ans = sum;
			for(int j=i+1 ; j<n ; j++)
			{
				sum = sum*num[j];

				if(sum > ans)
					ans = sum;
			}
		}


		if(ans < 0)
		{
			ans = 0;
			printf("Case #%d: The maximum product is %lld.\n\n",t,ans );
		}
		else
			printf("Case #%d: The maximum product is %lld.\n\n", t,ans);

	}
		
}

