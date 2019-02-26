#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif 

	int n;
	while(~scanf("%d" , &n))
	{
		int ans_l[1000] = {0} , ans_r[1000] = {0};
		int j=0;

		for(int i=n*2 ; i>n ; i--)
		{
			int a = n*i;
			int b = i-n;

			if(a % b == 0)
			{
				ans_l[j] = i;
				ans_r[j] = a/b;
				j++;
			}
		}

		cout << j<<endl;
		for(int i=j-1 ; i>=0 ; i--)
			printf("1/%d = 1/%d + 1/%d\n",n,ans_r[i] , ans_l[i] );
	}
	return 0;
}
