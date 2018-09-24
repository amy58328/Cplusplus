#include<iostream>
#include<string>
#include<cstdio>

using namespace std ;

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int n;
	scanf("%d",&n);
	for(int q=0;q<n;q++)
	{
		int wave,time;

		scanf("%d %d ",&wave,&time);
		if(wave==1 && time==1)
			printf("%d\n\n",1 );
		else 
		{
			for(int w=0;w<time;w++)
			{
				for(int i=1;i<=wave;i++)
				{
					for(int j=1;j<=i;j++)
						printf("%d",i);
						
					printf("\n");
				}

				for(int i=wave-1;i>0;i--)
				{
					for(int j=0;j<i;j++)
						printf("%d",i);

					printf("\n");					
				}
				if(w!=time-1 || q!=n-1)
				printf("\n");
			}
		}
	}
	return 0;
}
