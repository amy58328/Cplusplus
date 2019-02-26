//列舉法就可以了

#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<stack>

#define loop(i,n) for(int i=0;i<n;i++) 

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif 

	int n;


	for(int t=1 ; ~scanf("%d" , &n) ; t++)
	{
		int set[n];
		loop(i,n)
			cin >> set[i];
		long long  ans=0;

		loop(i,n)
		{
			long long mul = 1;
			for(int j=i ; j<n ; j++)
			{
				mul *= set[j];
				if(mul > ans)
					ans = mul;
			}

			
		}

		printf("Case #%d: The maximum product is %lld.\n\n",t,ans );
		
	}
	return 0;
}