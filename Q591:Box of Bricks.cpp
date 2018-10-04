#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int n,as=1;
	while(~scanf("%d",&n))
	{
		if(n==0)
			break;
		int a[1000];
		int sun=0,sum=0;
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sun+=a[i];
		}

	
		sun/=n;
		
		for(int i=0;i<n;i++)
		{
			sum+=abs(a[i]-sun);
		}


		sum/=2;
		printf("Set #%d\n",as);
		as++;
		printf("The minimum number of moves is %d.\n\n",sum );

	}
}
