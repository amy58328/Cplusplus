#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>

using namespace std;

int main()
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif 

	int size;
	while(~scanf("%d",&size))
	{
		int time=0;
		//printf("[%d]\n",test );
		int a[size];
		int b[size+1];

		memset(b,0,sizeof(b));

		for(int i=0;i<size;i++)
		{
			cin >> a[i];
		}

		for(int i=0;i<size-1;i++)
		{
			int  qq=abs(a[i]-a[i+1]);
			b[qq]=1;
		}

		/*for(int i=0;i<size+1;i++)
		{
			cout <<i << " ";
			cout <<b[i]<<endl;
		}*/

		if(size==1)
			cout <<"Jolly"<<endl;

		for(int i=1;i<size;i++)
		{

			if(b[i]==0)
			{
				cout <<"Not jolly"<<endl;
				break;
			}

			else if(i==size-1)
			{
				if(b[i]==1)
					cout <<"Jolly"<<endl;

				else
					cout <<"Not jolly"<<endl;
			}
		}
	}

	return 0;
}
