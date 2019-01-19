#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


int main()
{

	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif 

	long long int a,b;
	while(~scanf("%lld %lld",&a,&b))
	{
		long long int s;
		s=abs(a-b);
			cout << s<<endl;		
	}
	
	return 0;
}