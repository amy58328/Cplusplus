#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif
	int num1,num2;
	while(~scanf("%d %d",&num1,&num2))
	{
		int cycle=1,big;

		printf("%d %d ",num1,num2);
		
		if(num1>num2)
		{
			int sum=num1;
			num1=num2;
			num2=sum;
		}

		for(int i=num1;i<=num2;i++)
		{
			int n=i;
			while(1)
			{	
				if(n==1)
					break;
				if(n%2==0)
				{
					n=n/2;
					cycle++;
				}

				else 
				{
					n=n*3+1;
					cycle++;
				}

				
			}

			if(big<cycle)
				big=cycle;
			cycle=1;

		}
		printf("%d\n",big);
		big=0;	
	}

	return 0;
}
