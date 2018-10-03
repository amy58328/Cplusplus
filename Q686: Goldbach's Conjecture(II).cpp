/*程式競賽week1
想法:
1.建質數表
2.for迴圈時只需要使用n/2就可以了 */

#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

bool a[33000];


void prime()
{
	for(int i=0;i<=33000;i++)
		a[i]=1;

	a[0]=0;
	a[1]=0;
	for(int i=2;i<=33000;i++)
	{
		if(a[i]==1)
		{
			for(int j=i*i;j<=33000;j+=i)
				a[j]=0;
		}
	}
}

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int n,time=0;
	prime();
	while(~scanf("%d",&n))
	{
		if(n==0)
			break;
		for(int i=1;i<=n/2;i++)
		{
			if(a[i]==1)
			{
				//printf("(%d) ",i );
				int q=n-i;
				//printf("{%d} ",q );
				if(a[q]==1)
				{
					time++;
					//printf("[%d] ",time );
				}
			}
		}
		cout << time<<endl;
		time=0;
	}

	
	//for(int i=0;i<=33000;i++)
	//	cout <<a[i]<<" ";
	return 0;
}
