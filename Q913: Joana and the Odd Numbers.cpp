#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char const *argv[])
{	
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	long long a;
	while(~scanf("%lld",&a))
	{
		long long n;
		n=((a+1)*((a+1)/2))/2;
		n=((n*2-1)-2)*3;
		cout <<n <<endl;
	}
	
	return 0;
}
