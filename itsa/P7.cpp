#include<bits/stdc++.h>

using namespace std;

int main(int argc, char)
{
	int t ;
	cin >>t ;
	while(t--)
	{
		char opera ;
		cin >> opera ; 
		int n1,u1,n2,u2;
		cin >> n1>> u1 >> n2>> u2 ;
		int ans_n,ans_u;
		if(opera == '-')
		{	
			ans_n = n1 - n2;
			ans_u = u1 - u2;
		}

		else if(opera == '+')
		{
			ans_n = n1 + n2;
			ans_u = u1 + u2;
		}

		else if(opera == '*')
		{
			ans_u = n1*u2 + n2*u1;
			ans_n = n1*n2 - u2*u1;
		}

		else if(opera == '/')
		{
			ans_n = (n1*n2 + u1*u2)/(n2*n2+u2*u2);
			ans_u = (u1*n2 - n1*u2)/(n2*n2+u2*u2);
		}

		cout << ans_n << " " << ans_u <<endl;
	}
}
