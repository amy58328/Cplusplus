#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	char c;
	int q=0;
	while(~scanf("%c",&c))
	{
		if(c=='"'&& q==0)
		{
			printf("``" );
			q=1;
		}
		else if(c=='"'&& q==1)
		{
			printf("\'\'" );
			q=0;
		}
		else 
			printf("%c",c );
	}
	return 0;
}
