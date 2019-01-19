#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<stack>

#define loop(i,n) for(int i=0;i<n;i++) 

using namespace std;

bool prime[33000];

void prime_build()
{
	for(int i=0 ; i<33000 ; i++)
		prime[i] = 1;

	prime[0] = 0;
	prime[1] = 0;

	for(int i=2 ; i<33000 ; i++)
	{
		if(prime[i] = 1)
		{
			for(int j=i+i ;j<33000 ; j+=i)
				prime[j] = 0;
		}
	}
}

int main(int argc, char const *argv[])
{

    prime_build();
	return 0 ;
}
