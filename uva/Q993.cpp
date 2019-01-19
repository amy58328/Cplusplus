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

	int n ;
	cin >> n;
	for(int t=0 ; t<n ; t++)
	{
		long long input ; 
		cin >> input ; 

		if(input == 0)
		{
			cout << "0" <<endl;
			continue;
		}

		if(input == 1)
		{
			cout << "1" <<endl;
			continue;
		}

		int ans[50];
		int j = 0;

		for(int i = 9 ; i>=2 ;i--)
		{
			while(input % i == 0 )
			{
				input /= i;
				ans[j] = i;
				j++;
			}
		}
		
		if(input > 10 || j == 0)
			cout << "-1" ;

		else
			for(int i=j-1 ;i>=0;i--)
			{
				cout << ans[i];
			}

		cout <<endl;
	}
}
