#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int num[10000];
	int ss;
	int i=0;
	while(~scanf("%d",&ss))
	{
		num[i]=ss;
		i++;
		sort(num,num+i);

		if(i%2==0)
		{
			int j;
			j=(num[i/2-1]+num[i/2])/2;
			cout <<j<<endl;
		}

		if(i%2==1)
		{
			int j;
			j=(i/2);
			//cout << j;
			cout <<num[j]<<endl;
		}

	}
	return 0;
}