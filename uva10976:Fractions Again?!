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


	int n;
	while(~scanf("%d", &n ))
	{
		int a[10000],b[10000];
		int q,w=1;
		
		a[0]=n*2;
		b[0]=n*2;

		for(int i=n*2-1;i>n;i--)
		{
			q=i*n;
			if(q%(i-n)==0)
			{
				q=q/(i-n);
				a[w]=q;
				b[w]=i;
				w++;
			}
		}

		cout <<w<<endl;
		for(int i=w-1;i>=0;i--)
			printf("1/%d = 1/%d + 1/%d\n",n,a[i],b[i]);
	}
	return 0;
}
